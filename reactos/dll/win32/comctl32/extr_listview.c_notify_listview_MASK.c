
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef scalar_t__ LPNMLISTVIEW ;
typedef int LPNMHDR ;
typedef int LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*,int ,int ) ;

__attribute__((used)) static inline LRESULT FUNC_3(const LISTVIEW_INFO *VAR_0, INT VAR_1, LPNMLISTVIEW VAR_2)
{
    FUNC_0("(code=%d, plvnm=%s)\n", VAR_1, FUNC_1(VAR_2));
    return FUNC_2(VAR_0, VAR_1, (LPNMHDR)VAR_2);
}
