
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int dummy; } ;


 int FUNC_0 (struct fmtbuf*,int ) ;
 int FUNC_1 (char*,int,char*,int,int,double) ;

__attribute__((used)) static void FUNC_2(struct fmtbuf *VAR_0, double VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[100], *VAR_5 = VAR_4;
 FUNC_1(VAR_4, sizeof VAR_4, "%*.*f", VAR_2, VAR_3, VAR_1);
 while (*VAR_5)
  FUNC_0(VAR_0, *VAR_5++);
}
