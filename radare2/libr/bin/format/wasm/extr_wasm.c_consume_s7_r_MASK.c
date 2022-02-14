
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef scalar_t__ st8 ;
typedef int RBuffer ;
typedef int ConsumeFcn ;


 int FUNC_0 (int *,int ,size_t*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_1 (RBuffer *VAR_1, ut64 VAR_2, st8 *VAR_3) {
 size_t VAR_4;
 ut32 VAR_5 = FUNC_0 (VAR_1, VAR_2, &VAR_4, (ConsumeFcn)VAR_0);
 if (VAR_3) {
  *VAR_3 = (st8) (((VAR_5 & 0x10000000) << 7) | (VAR_5 & 0x7f));
 }
 return VAR_4;
}
