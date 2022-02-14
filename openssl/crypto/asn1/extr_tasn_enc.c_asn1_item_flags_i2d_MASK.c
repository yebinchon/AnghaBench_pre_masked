
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int const**,unsigned char**,int const*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const ASN1_VALUE *VAR_2, unsigned char **VAR_3,
                               const ASN1_ITEM *VAR_4, int VAR_5)
{
    if (VAR_3 != ((void*)0) && *VAR_3 == ((void*)0)) {
        unsigned char *VAR_6, *VAR_7;
        int VAR_8;

        VAR_8 = FUNC_0(&VAR_2, ((void*)0), VAR_4, -1, VAR_5);
        if (VAR_8 <= 0)
            return VAR_8;
        if ((VAR_7 = FUNC_2(VAR_8)) == ((void*)0)) {
            FUNC_1(VAR_0, VAR_1);
            return -1;
        }
        VAR_6 = VAR_7;
        FUNC_0(&VAR_2, &VAR_6, VAR_4, -1, VAR_5);
        *VAR_3 = VAR_7;
        return VAR_8;
    }

    return FUNC_0(&VAR_2, VAR_3, VAR_4, -1, VAR_5);
}
