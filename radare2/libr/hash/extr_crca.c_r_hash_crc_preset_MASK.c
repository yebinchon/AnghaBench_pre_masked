
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utcrc ;
typedef int ut8 ;
typedef int ut32 ;
typedef enum CRC_PRESETS { ____Placeholder_CRC_PRESETS } CRC_PRESETS ;
typedef int R_CRC_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int ) ;

utcrc FUNC_3 (const ut8 *VAR_1, ut32 VAR_2, enum CRC_PRESETS VAR_3) {
 if (!VAR_1 || !VAR_2 || VAR_3 >= VAR_0) {
  return 0;
 }
 utcrc VAR_4;
 R_CRC_CTX VAR_5;
 FUNC_1 (&VAR_5, VAR_3);
 FUNC_2 (&VAR_5, VAR_1, VAR_2);
 FUNC_0 (&VAR_5, &VAR_4);
 return VAR_4;
}
