
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_15__ {int array; } ;
struct TYPE_14__ {int addrLen; int addr; } ;
struct TYPE_12__ {int tcUrl; int swfUrl; int flashVer; int pubPasswd; int pubUser; } ;
struct TYPE_16__ {int m_outChunkSize; int m_bSendChunkSizeInfo; int m_bUseNagle; TYPE_3__ m_bindIP; TYPE_1__ Link; } ;
struct TYPE_13__ {char const* array; } ;
struct rtmp_stream {TYPE_4__ path; TYPE_6__ rtmp; int output; TYPE_2__ key; TYPE_4__ bind_ip; int encoder_name; int password; int username; } ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char const*) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct rtmp_stream*) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (int *,int*,int) ;
 char* FUNC_13 (int *) ;
 int * FUNC_14 (int ,size_t) ;
 int FUNC_15 (struct rtmp_stream*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct rtmp_stream*) ;

__attribute__((used)) static int FUNC_19(struct rtmp_stream *VAR_3)
{
 if (FUNC_8(&VAR_3->path)) {
  FUNC_17("URL is empty");
  return VAR_0;
 }

 FUNC_9("Connecting to RTMP URL %s...", VAR_3->path.array);

 FUNC_4(&VAR_3->rtmp);
 if (!FUNC_5(&VAR_3->rtmp, VAR_3->path.array))
  return VAR_0;

 FUNC_3(&VAR_3->rtmp);

 FUNC_7(&VAR_3->encoder_name, "FMLE/3.0 (compatible; FMSc/1.0)");

 FUNC_16(&VAR_3->rtmp.Link.pubUser, &VAR_3->username);
 FUNC_16(&VAR_3->rtmp.Link.pubPasswd, &VAR_3->password);
 FUNC_16(&VAR_3->rtmp.Link.flashVer, &VAR_3->encoder_name);
 VAR_3->rtmp.Link.swfUrl = VAR_3->rtmp.Link.tcUrl;

 if (FUNC_8(&VAR_3->bind_ip) ||
     FUNC_6(&VAR_3->bind_ip, "default") == 0) {
  FUNC_11(&VAR_3->rtmp.m_bindIP, 0,
         sizeof(VAR_3->rtmp.m_bindIP));
 } else {
  bool VAR_4 = FUNC_12(&VAR_3->rtmp.m_bindIP.addr,
       &VAR_3->rtmp.m_bindIP.addrLen,
       VAR_3->bind_ip.array);
  if (VAR_4) {
   int VAR_5 = VAR_3->rtmp.m_bindIP.addrLen;
   bool VAR_6 = VAR_5 == sizeof(struct sockaddr_in6);
   FUNC_9("Binding to IPv%d", VAR_6 ? 6 : 4);
  }
 }

 FUNC_0(&VAR_3->rtmp, VAR_3->key.array);

 for (size_t VAR_7 = 1;; VAR_7++) {
  obs_encoder_t *VAR_8 =
   FUNC_14(VAR_3->output, VAR_7);
  const char *VAR_9;

  if (!VAR_8)
   break;

  VAR_9 = FUNC_13(VAR_8);
  FUNC_0(&VAR_3->rtmp, VAR_9);
 }

 VAR_3->rtmp.m_outChunkSize = 4096;
 VAR_3->rtmp.m_bSendChunkSizeInfo = 1;
 VAR_3->rtmp.m_bUseNagle = 1;





 if (!FUNC_1(&VAR_3->rtmp, ((void*)0))) {
  FUNC_15(VAR_3);
  return VAR_1;
 }

 if (!FUNC_2(&VAR_3->rtmp, 0))
  return VAR_2;

 FUNC_9("Connection to %s successful", VAR_3->path.array);

 return FUNC_10(VAR_3);
}
