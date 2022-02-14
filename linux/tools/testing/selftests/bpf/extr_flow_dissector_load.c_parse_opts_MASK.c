
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,char**,char*) ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, char **VAR_5)
{
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 int VAR_8;

 while ((VAR_8 = FUNC_1(VAR_4, VAR_5, "adp:s:")) != -1) {
  switch (VAR_8) {
  case 'a':
   if (VAR_7)
    FUNC_0(1, 0, "attach/detach are exclusive");
   VAR_6 = 1;
   break;
  case 'd':
   if (VAR_6)
    FUNC_0(1, 0, "attach/detach are exclusive");
   VAR_7 = 1;
   break;
  case 'p':
   if (VAR_1)
    FUNC_0(1, 0, "only one prog name can be given");

   VAR_1 = VAR_3;
   break;
  case 's':
   if (VAR_2)
    FUNC_0(1, 0, "only one section can be given");

   VAR_2 = VAR_3;
   break;
  }
 }

 if (VAR_7)
  VAR_0 = 0;

 if (VAR_0 && !VAR_1)
  FUNC_0(1, 0, "must provide a path to the BPF program");

 if (VAR_0 && !VAR_2)
  FUNC_0(1, 0, "must provide a section name");
}
