
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef int optbuf ;
struct TYPE_2__ {char* format; int name; } ;


 char VAR_0 ;
 int FUNC_0 (char*,int,char*,char) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 char FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*) ;
 char FUNC_5 (unsigned char*) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (struct in_addr) ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (unsigned char) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,...) ;

char *
FUNC_13(unsigned int VAR_2, unsigned char *VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 static char VAR_7[32768];
 int VAR_8 = 0, VAR_9 = -1, VAR_10 = 0;
 char VAR_11[32], *VAR_12 = VAR_7;
 int VAR_13, VAR_14, VAR_15, VAR_16 = sizeof(VAR_7);
 unsigned char *VAR_17 = VAR_3;
 struct in_addr VAR_18;
 char VAR_19;


 if (VAR_2 > 255)
  FUNC_1("pretty_print_option: bad code %d", VAR_2);

 if (VAR_5)
  VAR_19 = ',';
 else
  VAR_19 = ' ';


 for (VAR_13 = 0; VAR_1[VAR_2].format[VAR_13]; VAR_13++) {
  if (!VAR_9) {
   FUNC_12("%s: Excess information in format string: %s",
       VAR_1[VAR_2].name,
       &(VAR_1[VAR_2].format[VAR_13]));
   break;
  }
  VAR_10++;
  VAR_11[VAR_13] = VAR_1[VAR_2].format[VAR_13];
  switch (VAR_1[VAR_2].format[VAR_13]) {
  case 'A':
   --VAR_10;
   VAR_11[VAR_13] = 0;
   VAR_9 = 0;
   break;
  case 'X':
   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
    if (!FUNC_8(VAR_3[VAR_15]) ||
        !FUNC_9(VAR_3[VAR_15]))
     break;
   if (VAR_15 == VAR_4) {
    VAR_11[VAR_13] = 't';
    VAR_9 = -2;
   } else {
    VAR_11[VAR_13] = 'x';
    VAR_8++;
    VAR_19 = ':';
    VAR_9 = 0;
   }
   VAR_11[VAR_13 + 1] = 0;
   break;
  case 't':
   VAR_11[VAR_13] = 't';
   VAR_11[VAR_13 + 1] = 0;
   VAR_9 = -2;
   break;
  case 'I':
  case 'l':
  case 'L':
   VAR_8 += 4;
   break;
  case 's':
  case 'S':
   VAR_8 += 2;
   break;
  case 'b':
  case 'B':
  case 'f':
   VAR_8++;
   break;
  case 'e':
   break;
  default:
   FUNC_12("%s: garbage in format string: %s",
       VAR_1[VAR_2].name,
       &(VAR_1[VAR_2].format[VAR_13]));
   break;
  }
 }


 if (VAR_8 > VAR_4) {
  FUNC_12("%s: expecting at least %d bytes; got %d",
      VAR_1[VAR_2].name, VAR_8, VAR_4);
  return ("<error>");
 }

 if (VAR_9 == -1 && VAR_8 < VAR_4)
  FUNC_12("%s: %d extra bytes",
      VAR_1[VAR_2].name, VAR_4 - VAR_8);


 if (!VAR_9)
  VAR_9 = VAR_4 / VAR_8;

 if (VAR_9 > 0 && VAR_9 * VAR_8 < VAR_4)
  FUNC_12("%s: %d extra bytes at end of array",
      VAR_1[VAR_2].name, VAR_4 - VAR_9 * VAR_8);


 if (VAR_9 < 0)
  VAR_9 = 1;


 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
   int VAR_20;
   switch (VAR_11[VAR_14]) {
   case 't':
    if (VAR_6) {
     *VAR_12++ = '"';
     VAR_16--;
    }
    for (; VAR_17 < VAR_3 + VAR_4; VAR_17++) {
     if (!FUNC_8(*VAR_17) ||
         !FUNC_9(*VAR_17)) {
      if (VAR_17 + 1 != VAR_3 + VAR_4 ||
          *VAR_17 != 0) {
       FUNC_0(VAR_12, VAR_16,
           "\\%03o", *VAR_17);
       VAR_12 += 4;
       VAR_16 -= 4;
      }
     } else if (*VAR_17 == '"' ||
         *VAR_17 == '\'' ||
         *VAR_17 == '$' ||
         *VAR_17 == '`' ||
         *VAR_17 == '\\') {
      *VAR_12++ = '\\';
      *VAR_12++ = *VAR_17;
      VAR_16 -= 2;
     } else {
      *VAR_12++ = *VAR_17;
      VAR_16--;
     }
    }
    if (VAR_6) {
     *VAR_12++ = '"';
     VAR_16--;
    }

    *VAR_12 = 0;
    break;
   case 'I':
    VAR_18.s_addr = FUNC_6(FUNC_4(VAR_17));
    FUNC_11(VAR_12, FUNC_7(VAR_18), VAR_16 - 1);
    VAR_12[VAR_16 - 1] = VAR_0;
    VAR_20 = FUNC_10(VAR_12);
    if (VAR_20 >= VAR_16)
     goto toobig;
    VAR_16 -= VAR_20;
    VAR_17 += 4;
    break;
   case 'l':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%ld",
        (long)FUNC_2(VAR_17));
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    VAR_17 += 4;
    break;
   case 'L':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%ld",
        (unsigned long)FUNC_4(VAR_17));
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    VAR_17 += 4;
    break;
   case 's':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%d",
        FUNC_3(VAR_17));
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    VAR_17 += 2;
    break;
   case 'S':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%d",
        FUNC_5(VAR_17));
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    VAR_17 += 2;
    break;
   case 'b':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%d",
        *(char *)VAR_17++);
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    break;
   case 'B':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%d", *VAR_17++);
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    break;
   case 'x':
    VAR_20 = FUNC_0(VAR_12, VAR_16, "%x", *VAR_17++);
    if (VAR_20 >= VAR_16 || VAR_20 == -1)
     goto toobig;
    VAR_16 -= VAR_20;
    break;
   case 'f':
    VAR_20 = (size_t) FUNC_11(VAR_12, *VAR_17++ ? "true" : "false", VAR_16 - 1);
    VAR_12[VAR_16 - 1] = VAR_0;
    if (VAR_20 >= VAR_16)
     goto toobig;
    VAR_16 -= VAR_20;
    break;
   default:
    FUNC_12("Unexpected format code %c", VAR_11[VAR_14]);
   }
   VAR_12 += FUNC_10(VAR_12);
   VAR_16 -= FUNC_10(VAR_12);
   if (VAR_16 < 1)
    goto toobig;
   if (VAR_14 + 1 < VAR_10 && VAR_19 != ':') {
    *VAR_12++ = ' ';
    VAR_16--;
   }
  }
  if (VAR_13 + 1 < VAR_9) {
   *VAR_12++ = VAR_19;
   VAR_16--;
  }
  if (VAR_16 < 1)
   goto toobig;

 }
 return (VAR_7);
 toobig:
 FUNC_12("dhcp option too large");
 return ("<error>");
}
