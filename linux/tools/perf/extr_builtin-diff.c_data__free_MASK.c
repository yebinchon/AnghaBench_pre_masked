
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_hpp_fmt {int header; } ;
struct data__file {struct diff_hpp_fmt* fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct data__file *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct diff_hpp_fmt *VAR_3 = &VAR_1->fmt[VAR_2];

  FUNC_0(&VAR_3->header);
 }
}
