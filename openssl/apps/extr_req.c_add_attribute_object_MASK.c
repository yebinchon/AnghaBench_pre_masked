
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int X509_REQ ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,unsigned long,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,char*,int,int,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(X509_REQ *VAR_1, char *VAR_2, const char *VAR_3,
                                char *VAR_4, int VAR_5, int VAR_6,
                                int VAR_7, unsigned long VAR_8)
{
    int VAR_9 = 0;
    char VAR_10[1024];

    VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, VAR_10, sizeof(VAR_10),
                     "Attribute value", "Attribute default");
    if ((VAR_9 == 0) || (VAR_9 == 1))
        return VAR_9;
    VAR_9 = 1;

    if (!FUNC_2(VAR_1, VAR_5, VAR_8,
                                   (unsigned char *)VAR_10, -1)) {
        FUNC_0(VAR_0, "Error adding attribute\n");
        FUNC_1(VAR_0);
        VAR_9 = 0;
    }

    return VAR_9;
}
