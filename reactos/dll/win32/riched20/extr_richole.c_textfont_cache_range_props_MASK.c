
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
struct TYPE_6__ {int str; } ;
struct TYPE_5__ {TYPE_4__* props; int range; } ;
typedef TYPE_1__ ITextFontImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,TYPE_4__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(ITextFontImpl *VAR_3)
{
    enum textfont_prop_id VAR_4;
    for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_4 == VAR_0)
            FUNC_1(VAR_3->range, &VAR_3->props[VAR_4].str);
        else
            FUNC_0(VAR_3, VAR_4, &VAR_3->props[VAR_4]);
    }
}
