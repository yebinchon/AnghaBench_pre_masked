
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_efw_transaction {int seqnum; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int) ;
 int FUNC_2 (struct fw_card*,int,int,void*,size_t,int*,scalar_t__) ;
 int FUNC_3 (struct fw_card*,int,int,void*,size_t,int*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct fw_card *VAR_6, struct fw_request *VAR_7,
      int VAR_8, int VAR_9, int VAR_10,
      int VAR_11, unsigned long long VAR_12,
      void *VAR_13, size_t VAR_14, void *VAR_15)
{
 int VAR_16, VAR_17;
 u32 VAR_18;

 VAR_16 = VAR_3;
 if (VAR_14 < sizeof(struct snd_efw_transaction)) {
  VAR_16 = VAR_2;
  goto end;
 } else if (VAR_12 != VAR_0) {
  VAR_16 = VAR_1;
  goto end;
 }

 VAR_18 = FUNC_0(((struct snd_efw_transaction *)VAR_13)->seqnum);
 if (VAR_18 > VAR_4 + 1) {
  FUNC_2(VAR_6, VAR_11, VAR_10,
           VAR_13, VAR_14, &VAR_16, VAR_18);
  if (VAR_5)
   FUNC_3(VAR_6, VAR_11, VAR_10,
          VAR_13, VAR_14, &VAR_17);
 } else {
  FUNC_3(VAR_6, VAR_11, VAR_10,
         VAR_13, VAR_14, &VAR_16);
 }
end:
 FUNC_1(VAR_6, VAR_7, VAR_16);
}
