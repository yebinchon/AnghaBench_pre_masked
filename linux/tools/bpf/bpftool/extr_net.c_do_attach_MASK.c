
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum net_attach_type { ____Placeholder_net_attach_type } net_attach_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char** VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int*,char***) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int*,char***) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(int VAR_5, char **VAR_6)
{
 enum net_attach_type VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;
 bool VAR_11 = 0;


 if (!FUNC_1(5))
  return -VAR_0;

 VAR_7 = FUNC_8(*VAR_6);
 if (VAR_7 == VAR_4) {
  FUNC_7("invalid net attach/detach type: %s", *VAR_6);
  return -VAR_0;
 }
 FUNC_0();

 VAR_8 = FUNC_9(&VAR_5, &VAR_6);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_9 = FUNC_6(&VAR_5, &VAR_6);
 if (VAR_9 < 1) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 if (VAR_5) {
  if (FUNC_4(*VAR_6, "overwrite")) {
   VAR_11 = 1;
  } else {
   FUNC_7("expected 'overwrite', got: '%s'?", *VAR_6);
   FUNC_2(VAR_8);
   return -VAR_0;
  }
 }


 if (FUNC_4("xdp", VAR_1[VAR_7]))
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_9,
        VAR_11);

 if (VAR_10 < 0) {
  FUNC_7("interface %s attach failed: %s",
        VAR_1[VAR_7], FUNC_10(-VAR_10));
  return VAR_10;
 }

 if (VAR_2)
  FUNC_5(VAR_3);

 return 0;
}
