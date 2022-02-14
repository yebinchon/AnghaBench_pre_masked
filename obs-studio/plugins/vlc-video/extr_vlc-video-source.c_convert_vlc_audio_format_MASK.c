
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum audio_format { ____Placeholder_audio_format } audio_format ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static enum audio_format FUNC_2(char *VAR_3)
{
 if (FUNC_0(VAR_3, "S16N")) return VAR_0;
 if (FUNC_0(VAR_3, "S32N")) return VAR_1;
 if (FUNC_0(VAR_3, "FL32")) return VAR_2;

 do { if (FUNC_0(VAR_3, "U16N")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S16N"; return VAR_0; } } while (0);
 do { if (FUNC_0(VAR_3, "U32N")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "S24N")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "U24N")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "FL64")) { *(uint32_t *)VAR_3 = *(uint32_t *)"FL32"; return VAR_2; } } while (0);

 do { if (FUNC_0(VAR_3, "S16I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S16N"; return VAR_0; } } while (0);
 do { if (FUNC_0(VAR_3, "U16I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S16N"; return VAR_0; } } while (0);
 do { if (FUNC_0(VAR_3, "S24I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "U24I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "S32I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);
 do { if (FUNC_0(VAR_3, "U32I")) { *(uint32_t *)VAR_3 = *(uint32_t *)"S32N"; return VAR_1; } } while (0);



 *(uint32_t *)VAR_3 = *(uint32_t *)"FL32";
 return VAR_2;
}
