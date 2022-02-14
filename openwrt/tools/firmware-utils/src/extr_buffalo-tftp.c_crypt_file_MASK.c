
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 unsigned char* FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int ,unsigned char*,scalar_t__) ;
 int FUNC_6 (int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned char *VAR_5 = ((void*)0);
 ssize_t VAR_6;
 int VAR_7;
 int VAR_8 = -1;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 < 0) {
  FUNC_0("unable to get size of '%s'", VAR_3);
  goto out;
 }

 VAR_5 = FUNC_4(VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_0("no memory for the buffer");
  goto out;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0("unable to read from file '%s'", VAR_3);
  goto out;
 }

 if (VAR_2)
  FUNC_1(VAR_5, 512, VAR_1, VAR_0);
 else
  FUNC_1(VAR_5, 512, VAR_0, VAR_1);

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0("unable to write to file '%s'", VAR_4);
  goto out;
 }

 VAR_8 = 0;

out:
 FUNC_2(VAR_5);
 return VAR_8;
}
