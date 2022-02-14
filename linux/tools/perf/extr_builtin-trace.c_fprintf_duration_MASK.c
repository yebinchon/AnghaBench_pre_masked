
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,char*,double) ;
 size_t FUNC_1 (int *,char*) ;

__attribute__((used)) static size_t FUNC_2(unsigned long VAR_4, bool VAR_5, FILE *VAR_6)
{
 double VAR_7 = (double)VAR_4 / VAR_0;
 size_t VAR_8 = FUNC_1(VAR_6, "(");

 if (!VAR_5)
  VAR_8 += FUNC_1(VAR_6, "         ");
 else if (VAR_7 >= 1.0)
  VAR_8 += FUNC_0(VAR_6, VAR_2, "%6.3f ms", VAR_7);
 else if (VAR_7 >= 0.01)
  VAR_8 += FUNC_0(VAR_6, VAR_3, "%6.3f ms", VAR_7);
 else
  VAR_8 += FUNC_0(VAR_6, VAR_1, "%6.3f ms", VAR_7);
 return VAR_8 + FUNC_1(VAR_6, "): ");
}
