
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 size_t FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (int ,char*,size_t) ;
 int * FUNC_7 (int *,size_t,int ) ;

__attribute__((used)) inline static void
FUNC_8(zend_string **VAR_5, size_t *VAR_6, char *VAR_7,
         size_t VAR_8, size_t VAR_9, char VAR_10,
         size_t VAR_11, size_t VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 register size_t VAR_16;
 size_t VAR_17;
 size_t VAR_18;
 size_t VAR_19;

 VAR_18 = (VAR_14 ? FUNC_1(VAR_9, VAR_12) : VAR_12);
 VAR_16 = (VAR_8 < VAR_18) ? 0 : VAR_8 - VAR_18;

 FUNC_2(("sprintf: appendstring(%x, %d, %d, \"%s\", %d, '%c', %d)\n",
      *VAR_5, *VAR_6, FUNC_3(*VAR_5), VAR_7, VAR_8, VAR_10, VAR_11));
 VAR_19 = FUNC_0(VAR_8, VAR_18);

 if(VAR_19 > VAR_3 - *VAR_6 - 1) {
  FUNC_6(VAR_2, "Field width %zd is too long", VAR_19);
 }

 VAR_17 = *VAR_6 + VAR_19 + 1;

 if (VAR_17 > FUNC_3(*VAR_5)) {
  size_t VAR_20 = FUNC_3(*VAR_5);
  while (VAR_17 > VAR_20) {
   if (VAR_20 > VAR_4/2) {
    FUNC_6(VAR_2, "Field width %zd is too long", VAR_17);
   }
   VAR_20 <<= 1;
  }
  FUNC_2(("sprintf ereallocing buffer to %d bytes\n", VAR_20));
  *VAR_5 = FUNC_7(*VAR_5, VAR_20, 0);
 }
 if (VAR_11 == VAR_1) {
  if ((VAR_13 || VAR_15) && VAR_10=='0') {
   FUNC_4(*VAR_5)[(*VAR_6)++] = (VAR_13) ? '-' : '+';
   VAR_7++;
   VAR_12--;
   VAR_18--;
  }
  while (VAR_16-- > 0) {
   FUNC_4(*VAR_5)[(*VAR_6)++] = VAR_10;
  }
 }
 FUNC_2(("sprintf: appending \"%s\"\n", VAR_7));
 FUNC_5(&FUNC_4(*VAR_5)[*VAR_6], VAR_7, VAR_18 + 1);
 *VAR_6 += VAR_18;
 if (VAR_11 == VAR_0) {
  while (VAR_16--) {
   FUNC_4(*VAR_5)[(*VAR_6)++] = VAR_10;
  }
 }
}
