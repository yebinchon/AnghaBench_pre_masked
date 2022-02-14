
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int need_setns; int nstgid; int tgid; } ;
struct nscookie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct nsinfo* FUNC_1 (struct nsinfo*) ;
 int FUNC_2 (struct nsinfo*,struct nscookie*) ;
 int FUNC_3 (struct nscookie*) ;
 int FUNC_4 (struct nsinfo*) ;
 int FUNC_5 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_6(char *VAR_1, size_t VAR_2,
         struct nsinfo **VAR_3)
{
 struct nscookie VAR_4;
 struct nsinfo *VAR_5;
 struct nsinfo *VAR_6;
 int VAR_7 = -1;

 VAR_5 = *VAR_3;

 if (VAR_5->need_setns) {
  FUNC_5(VAR_1, VAR_2, "/tmp/perf-%d.map", VAR_5->nstgid);
  FUNC_2(VAR_5, &VAR_4);
  VAR_7 = FUNC_0(VAR_1, VAR_0);
  FUNC_3(&VAR_4);
  if (VAR_7 == 0)
   return VAR_7;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_4(VAR_5);

  VAR_6->need_setns = 0;
  FUNC_5(VAR_1, VAR_2, "/tmp/perf-%d.map", VAR_6->tgid);
  *VAR_3 = VAR_6;
  VAR_7 = 0;
 }

 return VAR_7;
}
