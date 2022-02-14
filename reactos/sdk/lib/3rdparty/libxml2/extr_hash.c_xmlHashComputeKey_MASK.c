
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int xmlChar ;
struct TYPE_3__ {unsigned long random_seed; unsigned long size; } ;



__attribute__((used)) static unsigned long
FUNC_0(xmlHashTablePtr VAR_0, const xmlChar *VAR_1,
           const xmlChar *VAR_2, const xmlChar *VAR_3) {
    unsigned long VAR_4 = 0L;
    char VAR_5;




    if (VAR_1 != ((void*)0)) {
 VAR_4 += 30 * (*VAR_1);
 while ((VAR_5 = *VAR_1++) != 0) {
     VAR_4 = VAR_4 ^ ((VAR_4 << 5) + (VAR_4 >> 3) + (unsigned long)VAR_5);
 }
    }
    VAR_4 = VAR_4 ^ ((VAR_4 << 5) + (VAR_4 >> 3));
    if (VAR_2 != ((void*)0)) {
 while ((VAR_5 = *VAR_2++) != 0) {
     VAR_4 = VAR_4 ^ ((VAR_4 << 5) + (VAR_4 >> 3) + (unsigned long)VAR_5);
 }
    }
    VAR_4 = VAR_4 ^ ((VAR_4 << 5) + (VAR_4 >> 3));
    if (VAR_3 != ((void*)0)) {
 while ((VAR_5 = *VAR_3++) != 0) {
     VAR_4 = VAR_4 ^ ((VAR_4 << 5) + (VAR_4 >> 3) + (unsigned long)VAR_5);
 }
    }
    return (VAR_4 % VAR_0->size);
}
