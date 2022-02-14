
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfc_llcp_local {scalar_t__ lto; scalar_t__ gb_len; scalar_t__* gb; int miux; int local_wks; } ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* VAR_8 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_4 (int ,scalar_t__*,int,scalar_t__*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct nfc_llcp_local *VAR_9)
{
 u8 *VAR_10, VAR_11, VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 u8 *VAR_16 = ((void*)0), *VAR_17 = ((void*)0),
    *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 __be16 VAR_20 = FUNC_1(VAR_9->local_wks);
 u8 VAR_21 = 0;
 int VAR_22 = 0;

 VAR_11 = VAR_6;
 VAR_16 = FUNC_4(VAR_4, &VAR_11,
      1, &VAR_12);
 if (!VAR_16) {
  VAR_22 = -VAR_1;
  goto out;
 }
 VAR_21 += VAR_12;

 VAR_17 = FUNC_4(VAR_2, &VAR_9->lto, 1, &VAR_13);
 if (!VAR_17) {
  VAR_22 = -VAR_1;
  goto out;
 }
 VAR_21 += VAR_13;

 FUNC_5("Local wks 0x%lx\n", VAR_9->local_wks);
 VAR_18 = FUNC_4(VAR_5, (u8 *)&VAR_20, 2, &VAR_14);
 if (!VAR_18) {
  VAR_22 = -VAR_1;
  goto out;
 }
 VAR_21 += VAR_14;

 VAR_19 = FUNC_4(VAR_3, (u8 *)&VAR_9->miux, 0,
          &VAR_15);
 if (!VAR_19) {
  VAR_22 = -VAR_1;
  goto out;
 }
 VAR_21 += VAR_15;

 VAR_21 += FUNC_0(VAR_8);

 if (VAR_21 > VAR_7) {
  VAR_22 = -VAR_0;
  goto out;
 }

 VAR_10 = VAR_9->gb;

 FUNC_3(VAR_10, VAR_8, FUNC_0(VAR_8));
 VAR_10 += FUNC_0(VAR_8);

 FUNC_3(VAR_10, VAR_16, VAR_12);
 VAR_10 += VAR_12;

 FUNC_3(VAR_10, VAR_17, VAR_13);
 VAR_10 += VAR_13;

 FUNC_3(VAR_10, VAR_18, VAR_14);
 VAR_10 += VAR_14;

 FUNC_3(VAR_10, VAR_19, VAR_15);
 VAR_10 += VAR_15;

 VAR_9->gb_len = VAR_21;

out:
 FUNC_2(VAR_16);
 FUNC_2(VAR_17);
 FUNC_2(VAR_18);
 FUNC_2(VAR_19);

 return VAR_22;
}
