
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum net_attach_type { ____Placeholder_net_attach_type } net_attach_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int,int,int,int *) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int*,char***) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(int VAR_5, char **VAR_6)
{
 enum net_attach_type VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;


 if (!FUNC_1(3))
  return -VAR_0;

 VAR_7 = FUNC_7(*VAR_6);
 if (VAR_7 == VAR_4) {
  FUNC_6("invalid net attach/detach type: %s", *VAR_6);
  return -VAR_0;
 }
 FUNC_0();

 VAR_9 = FUNC_5(&VAR_5, &VAR_6);
 if (VAR_9 < 1)
  return -VAR_0;


 VAR_8 = -1;
 if (FUNC_3("xdp", VAR_1[VAR_7]))
  VAR_10 = FUNC_2(VAR_8, VAR_7, VAR_9, ((void*)0));

 if (VAR_10 < 0) {
  FUNC_6("interface %s detach failed: %s",
        VAR_1[VAR_7], FUNC_8(-VAR_10));
  return VAR_10;
 }

 if (VAR_2)
  FUNC_4(VAR_3);

 return 0;
}
