
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_mediatype_parsing {scalar_t__ subtype; scalar_t__ majortype; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int,int *) ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int * VAR_7 ;

__attribute__((used)) static HRESULT FUNC_6(struct regsvr_mediatype_parsing const *VAR_8)
{
    LONG VAR_9;
    HKEY VAR_10;
    HKEY VAR_11;
    WCHAR VAR_12[39];

    VAR_9 = FUNC_4(VAR_3, VAR_7, 0,
   VAR_4 | VAR_5, &VAR_10);
    if (VAR_9 == VAR_1) return VAR_6;
    if (VAR_9 != VAR_2) return FUNC_0(VAR_9);

    for (; VAR_9 == VAR_2 && VAR_8->majortype; ++VAR_8) {
 FUNC_5(VAR_8->majortype, VAR_12, 39);
 VAR_9 = FUNC_4(VAR_10, VAR_12, 0,
   VAR_4 | VAR_5, &VAR_11);
 if (VAR_9 == VAR_1) {
     VAR_9 = VAR_2;
     continue;
 }
 if (VAR_9 != VAR_2) break;

 FUNC_5(VAR_8->subtype, VAR_12, 39);
 VAR_9 = FUNC_3(VAR_11, VAR_12);
     if (VAR_9 == VAR_1) VAR_9 = VAR_2;


 VAR_9 = FUNC_2(VAR_11, 0);
 if (VAR_9 == VAR_0) VAR_9 = VAR_2;

 FUNC_1(VAR_11);
    }

    FUNC_1(VAR_10);

    return VAR_9 != VAR_2 ? FUNC_0(VAR_9) : VAR_6;
}
