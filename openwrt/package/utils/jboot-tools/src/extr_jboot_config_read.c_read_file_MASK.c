
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,int,scalar_t__,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,long,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(char *VAR_6)
{
 int VAR_7 = VAR_0;
 uint32_t VAR_8 = 0;
 FILE *VAR_9;

 VAR_9 = FUNC_3(VAR_6, "r");

 if (!VAR_9) {
  FUNC_0("Failed to open config input file %s", VAR_6);
  goto out;
 }

 FUNC_6(VAR_9, 0L, VAR_2);
 VAR_8 = FUNC_7(VAR_9);
 FUNC_6(VAR_9, 0L, VAR_3);

 VAR_4 = FUNC_8(VAR_8);
 FUNC_1("Allocated %d bytes.", VAR_8);

 if (FUNC_4(VAR_4, 1, VAR_8, VAR_9) != VAR_8) {
  FUNC_0("Failed to read config input file %s", VAR_6);
  goto out_free_buf;
 }

 FUNC_1("Read %d bytes of config input file %s", VAR_8, VAR_6);
 VAR_5 = VAR_8;
 VAR_7 = VAR_1;
 goto out;

 out_free_buf:
 FUNC_5(VAR_4);
 FUNC_2(VAR_9);
 out:
 return VAR_7;
}
