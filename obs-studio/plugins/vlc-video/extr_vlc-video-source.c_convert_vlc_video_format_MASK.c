
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum video_format FUNC_3(char *VAR_9, bool *VAR_10)
{
 *VAR_10 = 0;
 if (FUNC_0(VAR_9, "RGBA")) return VAR_4;
 if (FUNC_0(VAR_9, "BGRA")) return VAR_0;


 if (FUNC_0(VAR_9, "NV12")) return VAR_3;
 if (FUNC_0(VAR_9, "I420")) return VAR_1;
 if (FUNC_0(VAR_9, "IYUV")) return VAR_1;
 do { if (FUNC_0(VAR_9, "NV21")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_3; } } while (0);
 do { if (FUNC_0(VAR_9, "I422")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_3; } } while (0);
 do { if (FUNC_0(VAR_9, "Y42B")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_3; } } while (0);
 do { if (FUNC_0(VAR_9, "YV12")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_3; } } while (0);
 do { if (FUNC_0(VAR_9, "yv12")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_3; } } while (0);

 do { *VAR_10 = 1; do { if (FUNC_0(VAR_9, "J420")) { *(uint32_t *)VAR_9 = *(uint32_t *)"J420"; return VAR_1; } } while (0); } while (0);


 if (FUNC_0(VAR_9, "UYVY")) return VAR_5;
 if (FUNC_0(VAR_9, "UYNV")) return VAR_5;
 if (FUNC_0(VAR_9, "UYNY")) return VAR_5;
 if (FUNC_0(VAR_9, "Y422")) return VAR_5;
 if (FUNC_0(VAR_9, "HDYC")) return VAR_5;
 if (FUNC_0(VAR_9, "AVUI")) return VAR_5;
 if (FUNC_0(VAR_9, "uyv1")) return VAR_5;
 if (FUNC_0(VAR_9, "2vuy")) return VAR_5;
 if (FUNC_0(VAR_9, "2Vuy")) return VAR_5;
 if (FUNC_0(VAR_9, "2Vu1")) return VAR_5;

 if (FUNC_0(VAR_9, "YUY2")) return VAR_7;
 if (FUNC_0(VAR_9, "YUYV")) return VAR_7;
 if (FUNC_0(VAR_9, "YUNV")) return VAR_7;
 if (FUNC_0(VAR_9, "V422")) return VAR_7;

 if (FUNC_0(VAR_9, "YVYU")) return VAR_8;

 do { if (FUNC_0(VAR_9, "v210")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "cyuv")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "CYUV")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "VYUY")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "NV16")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "NV61")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "I410")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "I422")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "Y42B")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "J422")) { *(uint32_t *)VAR_9 = *(uint32_t *)"UYVY"; return VAR_5; } } while (0);


 if (FUNC_0(VAR_9, "I444")) return VAR_2;
 do { *VAR_10 = 1; do { if (FUNC_0(VAR_9, "J444")) { *(uint32_t *)VAR_9 = *(uint32_t *)"RGBA"; return VAR_4; } } while (0); } while (0);
 do { if (FUNC_0(VAR_9, "YUVA")) { *(uint32_t *)VAR_9 = *(uint32_t *)"RGBA"; return VAR_4; } } while (0);


 do { if (FUNC_0(VAR_9, "I440")) { *(uint32_t *)VAR_9 = *(uint32_t *)"I444"; return VAR_2; } } while (0);
 do { if (FUNC_0(VAR_9, "J440")) { *(uint32_t *)VAR_9 = *(uint32_t *)"I444"; return VAR_2; } } while (0);


 do { if (FUNC_0(VAR_9, "YVU9")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "I410")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_5; } } while (0);


 do { if (FUNC_0(VAR_9, "I411")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_5; } } while (0);
 do { if (FUNC_0(VAR_9, "Y41B")) { *(uint32_t *)VAR_9 = *(uint32_t *)"NV12"; return VAR_5; } } while (0);


 if (FUNC_0(VAR_9, "GREY")) return VAR_6;
 if (FUNC_0(VAR_9, "Y800")) return VAR_6;
 if (FUNC_0(VAR_9, "Y8  ")) return VAR_6;




 *(uint32_t *)VAR_9 = *(uint32_t *)"BGRA";
 return VAR_0;
}
