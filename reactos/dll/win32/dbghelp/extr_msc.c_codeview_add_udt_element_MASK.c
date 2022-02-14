
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int type; int nbits; int bitoff; } ;
struct TYPE_5__ {unsigned int type; int nbits; int bitoff; } ;
struct TYPE_4__ {int id; } ;
union codeview_reftype {TYPE_3__ bitfield_v2; TYPE_2__ bitfield_v1; TYPE_1__ generic; } ;
struct symt_udt {int dummy; } ;
struct symt {int dummy; } ;
struct codeview_type_parse {int module; } ;
typedef scalar_t__ DWORD64 ;
typedef int DWORD ;


 int VAR_0 ;


 int VAR_1 ;
 struct symt* FUNC_0 (struct codeview_type_parse*,unsigned int,int ) ;
 union codeview_reftype* FUNC_1 (struct codeview_type_parse*,unsigned int) ;
 int FUNC_2 (int ,struct symt_udt*,char const*,struct symt*,int,int) ;
 int FUNC_3 (int ,struct symt*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct codeview_type_parse* VAR_2,
                                     struct symt_udt* VAR_3, const char* VAR_4,
                                     int VAR_5, unsigned VAR_6)
{
    struct symt* VAR_7;
    const union codeview_reftype*VAR_8;

    if ((VAR_8 = FUNC_1(VAR_2, VAR_6)))
    {
        switch (VAR_8->generic.id)
        {
        case 129:
            FUNC_2(VAR_2->module, VAR_3, VAR_4,
                                 FUNC_0(VAR_2, VAR_8->bitfield_v1.type, VAR_0),
                                 (VAR_5 << 3) + VAR_8->bitfield_v1.bitoff,
                                 VAR_8->bitfield_v1.nbits);
            return;
        case 128:
            FUNC_2(VAR_2->module, VAR_3, VAR_4,
                                 FUNC_0(VAR_2, VAR_8->bitfield_v2.type, VAR_0),
                                 (VAR_5 << 3) + VAR_8->bitfield_v2.bitoff,
                                 VAR_8->bitfield_v2.nbits);
            return;
        }
    }
    VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_0);

    if (VAR_7)
    {
        DWORD64 VAR_9 = 0;
        FUNC_3(VAR_2->module, VAR_7, VAR_1, &VAR_9);
        FUNC_2(VAR_2->module, VAR_3, VAR_4, VAR_7,
                             VAR_5 << 3, (DWORD)VAR_9 << 3);
    }
}
