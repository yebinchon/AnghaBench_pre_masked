
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__* MMBitmapRef ;
typedef int MMBMPStringError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,size_t,size_t*) ;
 char* FUNC_2 (int,size_t) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,size_t,char*,unsigned long,unsigned long,char*) ;
 char* FUNC_6 (char*,int,int,size_t*) ;

uint8_t *FUNC_7(MMBitmapRef VAR_5, MMBMPStringError *VAR_6)
{
 uint8_t *VAR_7, *VAR_8;
 uint8_t *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == ((void*)0)) {
  if (VAR_6 != ((void*)0)) *VAR_6 = VAR_4;
  return ((void*)0);
 }

 VAR_8 = FUNC_6(VAR_7,
                            VAR_5->width * VAR_5->height *
                            VAR_2,
                            9, &VAR_11);
 FUNC_4(VAR_7);
 if (VAR_8 == ((void*)0)) {
  if (VAR_6 != ((void*)0)) *VAR_6 = VAR_3;
  return ((void*)0);
 }

 VAR_10 = FUNC_1(VAR_8, VAR_11 - 1, &VAR_12);
 FUNC_4(VAR_8);
 if (VAR_10 == ((void*)0)) {
  if (VAR_6 != ((void*)0)) *VAR_6 = VAR_1;
  return ((void*)0);
 }

 VAR_12 += 3 + (VAR_0 * 2);
 VAR_9 = FUNC_2(sizeof(char), (VAR_12 + 1));
 FUNC_5((char *)VAR_9, VAR_12, "b%lu,%lu,%s", (unsigned long)VAR_5->width,
                                              (unsigned long)VAR_5->height,
             VAR_10);
 VAR_9[VAR_12] = '\0';
 FUNC_4(VAR_10);
 return VAR_9;
}
