
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int xmlChar ;
struct TYPE_3__ {unsigned long random_seed; unsigned long size; } ;



__attribute__((used)) static unsigned long
FUNC_0(xmlHashTablePtr VAR_0,
     const xmlChar *VAR_1, const xmlChar *VAR_2,
     const xmlChar *VAR_3, const xmlChar *VAR_4,
     const xmlChar *VAR_5, const xmlChar *VAR_6) {
    unsigned long VAR_7 = 0L;
    char VAR_8;




    if (VAR_1 != ((void*)0))
 VAR_7 += 30 * (*VAR_1);
    else
 VAR_7 += 30 * (*VAR_2);

    if (VAR_1 != ((void*)0)) {
 while ((VAR_8 = *VAR_1++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
 VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)':');
    }
    if (VAR_2 != ((void*)0)) {
 while ((VAR_8 = *VAR_2++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
    }
    VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3));
    if (VAR_3 != ((void*)0)) {
 while ((VAR_8 = *VAR_3++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
 VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)':');
    }
    if (VAR_4 != ((void*)0)) {
 while ((VAR_8 = *VAR_4++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
    }
    VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3));
    if (VAR_5 != ((void*)0)) {
 while ((VAR_8 = *VAR_5++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
 VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)':');
    }
    if (VAR_6 != ((void*)0)) {
 while ((VAR_8 = *VAR_6++) != 0) {
     VAR_7 = VAR_7 ^ ((VAR_7 << 5) + (VAR_7 >> 3) + (unsigned long)VAR_8);
 }
    }
    return (VAR_7 % VAR_0->size);
}
