
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_mediatype_extension {int extension; scalar_t__ majortype; } ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int * HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_4(struct regsvr_mediatype_extension const *VAR_8)
{
    LONG VAR_9;
    HKEY VAR_10;
    HKEY VAR_11 = ((void*)0);

    VAR_9 = FUNC_3(VAR_2, VAR_7, 0,
   VAR_3 | VAR_4, &VAR_10);
    if (VAR_9 == VAR_0) return VAR_5;
    if (VAR_9 != VAR_1) return FUNC_0(VAR_9);

    VAR_9 = FUNC_3(VAR_10, VAR_6, 0,
   VAR_3 | VAR_4, &VAR_11);
    if (VAR_9 == VAR_0)
 VAR_9 = VAR_1;
    else if (VAR_9 == VAR_1)
 for (; VAR_9 == VAR_1 && VAR_8->majortype; ++VAR_8) {
     VAR_9 = FUNC_2(VAR_11, VAR_8->extension);
     if (VAR_9 == VAR_0) VAR_9 = VAR_1;
 }

    FUNC_1(VAR_10);
    if (VAR_11)
 FUNC_1(VAR_11);

    return VAR_9 != VAR_1 ? FUNC_0(VAR_9) : VAR_5;
}
