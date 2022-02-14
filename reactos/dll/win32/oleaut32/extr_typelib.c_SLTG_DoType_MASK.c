
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
typedef int WORD ;
struct TYPE_9__ {int cDims; int rgsabound; } ;
struct TYPE_7__ {TYPE_3__* lptdesc; TYPE_1__* lpadesc; int hreftype; } ;
struct TYPE_8__ {int vt; TYPE_2__ u; } ;
struct TYPE_6__ {int cDims; TYPE_3__ tdescElem; int rgbounds; } ;
typedef TYPE_3__ TYPEDESC ;
typedef int SAFEARRAYBOUND ;
typedef TYPE_4__ SAFEARRAY ;
typedef int BOOL ;
typedef int ARRAYDESC ;


 int VAR_0 ;
 int VAR_1 ;




 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int const*,int,int *) ;

__attribute__((used)) static WORD *FUNC_3(WORD *VAR_2, char *VAR_3, TYPEDESC *VAR_4, const sltg_ref_lookup_t *VAR_5)
{
    BOOL VAR_6 = VAR_0;

    while(!VAR_6) {
        if((*VAR_2 & 0xe00) == 0xe00) {
     VAR_4->vt = 130;
     VAR_4->u.lptdesc = FUNC_0(sizeof(TYPEDESC));
     VAR_4 = VAR_4->u.lptdesc;
 }
 switch(*VAR_2 & 0x3f) {
 case 130:
     VAR_4->vt = 130;
     VAR_4->u.lptdesc = FUNC_0(sizeof(TYPEDESC));
     VAR_4 = VAR_4->u.lptdesc;
     break;

 case 128:
     VAR_4->vt = 128;
            FUNC_2(VAR_5, *(++VAR_2) / 4, &VAR_4->u.hreftype);
     VAR_6 = VAR_1;
     break;

 case 131:
   {



     SAFEARRAY *VAR_7 = (SAFEARRAY *)(VAR_3 + *(++VAR_2));

     VAR_4->vt = 131;
     VAR_4->u.lpadesc = FUNC_0(sizeof(ARRAYDESC) + (VAR_7->cDims - 1) * sizeof(SAFEARRAYBOUND));
     VAR_4->u.lpadesc->cDims = VAR_7->cDims;
     FUNC_1(VAR_4->u.lpadesc->rgbounds, VAR_7->rgsabound,
     VAR_7->cDims * sizeof(SAFEARRAYBOUND));

     VAR_4 = &VAR_4->u.lpadesc->tdescElem;
     break;
   }

 case 129:
   {



     VAR_2++;
     VAR_4->vt = 129;
     VAR_4->u.lptdesc = FUNC_0(sizeof(TYPEDESC));
     VAR_4 = VAR_4->u.lptdesc;
     break;
   }
 default:
     VAR_4->vt = *VAR_2 & 0x3f;
     VAR_6 = VAR_1;
     break;
 }
 VAR_2++;
    }
    return VAR_2;
}
