
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,void*,void*,unsigned long,long,long) ;

long FUNC_3(BIO *VAR_3, int VAR_4, const char *VAR_5,
                       int VAR_6, long VAR_7, long VAR_8)
{
    BIO *VAR_9;

    VAR_9 = (BIO *)FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0))
        return VAR_8;

    if (VAR_4 == (VAR_0 | VAR_1)) {
        FUNC_2(VAR_9, "read from %p [%p] (%lu bytes => %ld (0x%lX))\n",
                   (void *)VAR_3, (void *)VAR_5, (unsigned long)VAR_6, VAR_8, VAR_8);
        FUNC_0(VAR_9, VAR_5, (int)VAR_8);
        return VAR_8;
    } else if (VAR_4 == (VAR_2 | VAR_1)) {
        FUNC_2(VAR_9, "write to %p [%p] (%lu bytes => %ld (0x%lX))\n",
                   (void *)VAR_3, (void *)VAR_5, (unsigned long)VAR_6, VAR_8, VAR_8);
        FUNC_0(VAR_9, VAR_5, (int)VAR_8);
    }
    return VAR_8;
}
