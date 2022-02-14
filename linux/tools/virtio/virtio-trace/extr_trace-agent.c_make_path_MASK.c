
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,char*,int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static const char *FUNC_4(int VAR_3, bool VAR_4)
{
 int VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("Could not allocate buffer\n");
  goto error;
 }

 if (VAR_4)

  VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_2, VAR_3);
 else

  VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_1, VAR_3);

 if (VAR_5 <= 0) {
  FUNC_1("Failed to generate %s path(CPU#%d):%d\n",
   VAR_4 ? "read" : "write", VAR_3, VAR_5);
  goto error;
 }

 return VAR_6;

error:
 FUNC_0(VAR_6);
 return ((void*)0);
}
