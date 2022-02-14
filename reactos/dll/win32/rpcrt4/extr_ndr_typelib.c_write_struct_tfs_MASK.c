
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbAlignment; int cbSizeInstance; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int ITypeInfo ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (unsigned char*,size_t,int) ;
 int FUNC_2 (unsigned char*,size_t,int ) ;
 unsigned char FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_4(ITypeInfo *VAR_3, unsigned char *VAR_4,
        size_t *VAR_5, TYPEATTR *VAR_6)
{
    unsigned char VAR_7 = FUNC_3(VAR_3, VAR_6);
    size_t VAR_8 = *VAR_5;

    if (VAR_7 != VAR_2)
        FUNC_0("fc %02x not implemented\n", VAR_7);

    FUNC_1 (VAR_4, *VAR_5, VAR_2);
    FUNC_1 (VAR_4, *VAR_5, VAR_6->cbAlignment - 1);
    FUNC_2(VAR_4, *VAR_5, VAR_6->cbSizeInstance);
    FUNC_1 (VAR_4, *VAR_5, VAR_1);
    FUNC_1 (VAR_4, *VAR_5, VAR_0);

    return VAR_8;
}
