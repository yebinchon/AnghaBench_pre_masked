
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; int str; int l; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline BOOL FUNC_2(enum textfont_prop_id VAR_1, textfont_prop_val *VAR_2,
    textfont_prop_val *VAR_3)
{
    switch (VAR_1)
    {
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 145:
    case 144:
    case 146:
    case 143:
    case 142:
    case 141:
    case 139:
    case 137:
    case 136:
    case 134:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
        return VAR_2->l == VAR_3->l;
    case 140:
        return !FUNC_1(VAR_2->str, VAR_3->str);
    case 138:
    case 135:
    case 133:
       return VAR_2->f == VAR_3->f;
    default:
        FUNC_0("unhandled font property %d\n", VAR_1);
        return VAR_0;
    }
}
