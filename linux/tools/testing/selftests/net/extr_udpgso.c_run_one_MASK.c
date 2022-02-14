
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct testcase {int tlen; int gso_len; int r_num_mss; int r_len_last; scalar_t__ tfail; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int,int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int,struct sockaddr*,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(struct testcase *VAR_9, int VAR_10, int VAR_11,
      struct sockaddr *VAR_12, socklen_t VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 bool VAR_18;

 FUNC_1(VAR_8, "ipv%d tx:%d gso:%d %s\n",
   VAR_12->sa_family == VAR_0 ? 4 : 6,
   VAR_9->tlen, VAR_9->gso_len,
   VAR_9->tfail ? "(fail)" : "");

 VAR_16 = VAR_9->gso_len;
 if (VAR_6) {
  if (FUNC_4(VAR_10, VAR_4, VAR_5, &VAR_16, sizeof(VAR_16)))
   FUNC_0(1, VAR_7, "setsockopt udp segment");
 }

 VAR_18 = FUNC_3(VAR_10, VAR_9->tlen, VAR_9->gso_len, VAR_12, VAR_13);
 if (VAR_18 && VAR_9->tfail)
  FUNC_0(1, 0, "send succeeded while expecting failure");
 if (!VAR_18 && !VAR_9->tfail)
  FUNC_0(1, 0, "send failed while expecting success");
 if (!VAR_18)
  return;

 if (VAR_9->gso_len)
  VAR_17 = VAR_9->gso_len;
 else
  VAR_17 = VAR_12->sa_family == VAR_0 ? VAR_1 : VAR_2;



 for (VAR_14 = 0; VAR_14 < VAR_9->r_num_mss; VAR_14++) {
  VAR_15 = FUNC_2(VAR_11, 0);
  if (VAR_15 != VAR_17)
   FUNC_0(1, 0, "recv.%d: %d != %d", VAR_14, VAR_15, VAR_17);
 }


 if (VAR_9->r_len_last) {
  VAR_15 = FUNC_2(VAR_11, 0);
  if (VAR_15 != VAR_9->r_len_last)
   FUNC_0(1, 0, "recv.%d: %d != %d (last)",
         VAR_14, VAR_15, VAR_9->r_len_last);
 }


 VAR_15 = FUNC_2(VAR_11, VAR_3);
 if (VAR_15)
  FUNC_0(1, 0, "recv: unexpected datagram");
}
