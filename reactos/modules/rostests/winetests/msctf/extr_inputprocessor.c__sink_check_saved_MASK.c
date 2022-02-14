
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITfDocumentMgr ;
typedef int INT ;
typedef int CHAR ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int,char*,int const*,int *,int *) ;

__attribute__((used)) static inline void FUNC_3(INT *VAR_4, ITfDocumentMgr *VAR_5, ITfDocumentMgr *VAR_6, const CHAR* VAR_7)
{
    int VAR_8 = FUNC_1(VAR_4);
    FUNC_0(VAR_4, VAR_7);
    if (VAR_5 != VAR_0 && VAR_8 != 0)
        FUNC_2(VAR_5 == VAR_2, "%s expected prev focus %p got %p\n", VAR_7, VAR_5, VAR_2);
    if (VAR_6 != VAR_0 && VAR_8 != 0)
        FUNC_2(VAR_6 == VAR_3, "%s expected current focus %p got %p\n", VAR_7, VAR_6, VAR_3);
    VAR_2 = VAR_1;
    VAR_3 = VAR_1;
}
