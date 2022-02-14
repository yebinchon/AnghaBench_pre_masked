
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring {scalar_t__ mm_space; int rd_num; int flen; TYPE_1__* rd; int rd_len; int mm_len; } ;
struct TYPE_2__ {scalar_t__ iov_base; int iov_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int,int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(int VAR_6, struct ring *VAR_7)
{
 int VAR_8;

 VAR_7->mm_space = FUNC_2(0, VAR_7->mm_len, VAR_4 | VAR_5,
         VAR_3 | VAR_1 | VAR_2, VAR_6, 0);
 if (VAR_7->mm_space == VAR_0) {
  FUNC_3("mmap");
  FUNC_0(1);
 }

 FUNC_1(VAR_7->rd, 0, VAR_7->rd_len);
 for (VAR_8 = 0; VAR_8 < VAR_7->rd_num; ++VAR_8) {
  VAR_7->rd[VAR_8].iov_base = VAR_7->mm_space + (VAR_8 * VAR_7->flen);
  VAR_7->rd[VAR_8].iov_len = VAR_7->flen;
 }
}
