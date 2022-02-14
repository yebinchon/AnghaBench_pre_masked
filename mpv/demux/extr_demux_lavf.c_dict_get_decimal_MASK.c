
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 long VAR_0 ;
 long VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char const*,int *,int ) ;
 long FUNC_1 (scalar_t__,char**,int) ;

__attribute__((used)) static int FUNC_2(AVDictionary *VAR_2, const char *VAR_3, int VAR_4)
{
    AVDictionaryEntry *VAR_5 = FUNC_0(VAR_2, VAR_3, ((void*)0), 0);
    if (VAR_5 && VAR_5->value) {
        char *VAR_6 = ((void*)0);
        long int VAR_7 = FUNC_1(VAR_5->value, &VAR_6, 10);
        if (VAR_6 && !VAR_6[0] && VAR_7 >= VAR_1 && VAR_7 <= VAR_0)
            return VAR_7;
    }
    return VAR_4;
}
