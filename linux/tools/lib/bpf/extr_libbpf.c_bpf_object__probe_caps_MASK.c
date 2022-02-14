
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int FUNC_0 (int (*) (struct bpf_object*)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct bpf_object*) ;

__attribute__((used)) static int
FUNC_3(struct bpf_object *VAR_4)
{
 int (*VAR_5[])(struct bpf_object *VAR_6) = {
  VAR_3,
  VAR_2,
  VAR_1,
  VAR_0,
 };
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  VAR_8 = VAR_5[VAR_7](VAR_4);
  if (VAR_8 < 0)
   FUNC_1("Probe #%d failed with %d.\n", VAR_7, VAR_8);
 }

 return 0;
}
