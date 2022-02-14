
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct options {int gc; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
typedef int line ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char**) ;
 int FUNC_2 (struct options*,char**,char const*,int,int ,int const,unsigned int const,unsigned int*,struct env_set*) ;
 scalar_t__ FUNC_3 (struct buffer*,char,char*,int) ;
 int FUNC_4 (struct buffer*,int *,int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (struct buffer*,char**,int *) ;
 scalar_t__ FUNC_7 (char*,char**,scalar_t__,char const*,int,int const,int *) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2,
                   struct options *VAR_3,
                   const char *VAR_4,
                   const int VAR_5,
                   const unsigned int VAR_6,
                   unsigned int *VAR_7,
                   struct env_set *VAR_8)
{
    char VAR_9[VAR_1];
    struct buffer VAR_10;
    int VAR_11 = 0;

    FUNC_4(&VAR_10, (uint8_t *)VAR_4, FUNC_9(VAR_4));

    while (FUNC_3(&VAR_10, '\n', VAR_9, sizeof(VAR_9)))
    {
        char *VAR_12[VAR_0+1];
        FUNC_0(VAR_12);
        ++VAR_11;
        if (FUNC_7(VAR_9, VAR_12, FUNC_1(VAR_12)-1, VAR_2, VAR_11, VAR_5, &VAR_3->gc))
        {
            FUNC_5(&VAR_12[0]);
            FUNC_6(&VAR_10, VAR_12, &VAR_3->gc);
            FUNC_2(VAR_3, VAR_12, VAR_2, VAR_11, 0, VAR_5, VAR_6, VAR_7, VAR_8);
        }
        FUNC_0(VAR_12);
    }
    FUNC_8(VAR_9, sizeof(VAR_9));
}
