
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* dictionaryFilename; int useDictionary; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;



int FUNC_0(LZ4IO_prefs_t* const VAR_0, const char* VAR_1)
{
    VAR_0->dictionaryFilename = VAR_1;
    VAR_0->useDictionary = VAR_1 != ((void*)0);
    return VAR_0->useDictionary;
}
