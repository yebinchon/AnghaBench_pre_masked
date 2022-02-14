
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_STATUS ;
typedef int CHAR16 ;
typedef int BOOLEAN ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*,int const*,int,int ) ;
 int VAR_0 ;

EFI_STATUS FUNC_2(const CHAR16 *VAR_1, const CHAR16 *VAR_2, BOOLEAN VAR_3) {
        return FUNC_1(&VAR_0, VAR_1, VAR_2, VAR_2 ? (FUNC_0(VAR_2)+1) * sizeof(CHAR16) : 0, VAR_3);
}
