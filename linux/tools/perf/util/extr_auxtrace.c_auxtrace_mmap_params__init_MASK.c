
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_mmap_params {unsigned int len; int mask; int prot; int offset; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct auxtrace_mmap_params *VAR_3,
    off_t VAR_4,
    unsigned int VAR_5,
    bool VAR_6)
{
 if (VAR_5) {
  VAR_3->offset = VAR_4;
  VAR_3->len = VAR_5 * (size_t)VAR_2;
  VAR_3->mask = FUNC_0(VAR_3->len) ? VAR_3->len - 1 : 0;
  VAR_3->prot = VAR_0 | (VAR_6 ? 0 : VAR_1);
  FUNC_1("AUX area mmap length %zu\n", VAR_3->len);
 } else {
  VAR_3->len = 0;
 }
}
