
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_error_code; } ;
struct rtmp_stream {int output; TYPE_1__ rtmp; } ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct rtmp_stream *VAR_0)
{
 const char *VAR_1 = ((void*)0);
 switch (VAR_0->rtmp.last_error_code) {
 case 137:
  VAR_1 = FUNC_0("ConnectionTimedOut");
  break;
 case 141:
  VAR_1 = FUNC_0("PermissionDenied");
  break;
 case 139:
  VAR_1 = FUNC_0("ConnectionAborted");
  break;
 case 138:
  VAR_1 = FUNC_0("ConnectionReset");
  break;
 case 136:
  VAR_1 = FUNC_0("HostNotFound");
  break;
 case 135:
  VAR_1 = FUNC_0("NoData");
  break;
 case 140:
  VAR_1 = FUNC_0("AddressNotAvailable");
  break;
 }



 if (!VAR_1) {
  switch (VAR_0->rtmp.last_error_code) {
  case -0x2700:
   VAR_1 = FUNC_0("SSLCertVerifyFailed");
   break;
  }
 }

 FUNC_1(VAR_0->output, VAR_1);
}
