
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nfonts; scalar_t__ nscratch; TYPE_1__** fonts; } ;
struct TYPE_7__ {char* name; int* lut; int dataSize; unsigned char* data; unsigned char freeData; float ascender; float descender; float lineh; int font; } ;
typedef TYPE_1__ FONSfont ;
typedef TYPE_2__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned char*,int) ;
 int FUNC_4 (char*,char const*,int) ;

int FUNC_5(FONScontext* VAR_2, const char* VAR_3, unsigned char* VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 FONSfont* VAR_12;

 int VAR_13 = FUNC_0(VAR_2);
 if (VAR_13 == VAR_1)
  return VAR_1;

 VAR_12 = VAR_2->fonts[VAR_13];

 FUNC_4(VAR_12->name, VAR_3, sizeof(VAR_12->name));
 VAR_12->name[sizeof(VAR_12->name)-1] = '\0';


 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
  VAR_12->lut[VAR_7] = -1;


 VAR_12->dataSize = VAR_5;
 VAR_12->data = VAR_4;
 VAR_12->freeData = (unsigned char)VAR_6;


 VAR_2->nscratch = 0;
 if (!FUNC_3(VAR_2, &VAR_12->font, VAR_4, VAR_5)) goto error;



 FUNC_2( &VAR_12->font, &VAR_8, &VAR_9, &VAR_11);
 VAR_10 = VAR_8 - VAR_9;
 VAR_12->ascender = (float)VAR_8 / (float)VAR_10;
 VAR_12->descender = (float)VAR_9 / (float)VAR_10;
 VAR_12->lineh = (float)(VAR_10 + VAR_11) / (float)VAR_10;

 return VAR_13;

error:
 FUNC_1(VAR_12);
 VAR_2->nfonts--;
 return VAR_1;
}
