
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;







 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1) {
 int VAR_2 = 0;
 if (*VAR_0 == '\0') {

  return -1;
 }

 switch (VAR_1) {
 case 129:
  VAR_2 = 1;

 case 130:
  if (*VAR_0 == '-') {
   VAR_0++;
  }
  if (*VAR_0 == '.') {
   VAR_0++;
  }
  while (FUNC_1 ((ut8)*VAR_0)) {
   VAR_0++;
  }
  if (*VAR_0 == '.') {
   VAR_0++;
  }
  while (FUNC_1 ((ut8)*VAR_0)) {
   VAR_0++;
  }
  if (VAR_2) {
   if (*VAR_0++ != 'l') {
    return -1;
   }
   if (*VAR_0++ != 'l') {
    return -1;
   }
  }
  switch (*VAR_0++) {
  case 'l':
   switch (*VAR_0++) {
   case 'i':
   case 'd':
   case 'u':
   case 'x':
   case 'X':
    return 0;
   default:
    return -1;
   }
  case 'h':
   switch (*VAR_0++) {
   case 'h':
    switch (*VAR_0++) {
    case 'i':
    case 'd':
    case 'u':
    case 'x':
    case 'X':
     return 0;
    default:
     return -1;
    }
   case 'd':
    return 0;
   default:
    return -1;
   }
  case 'i':
  case 'c':
  case 'd':
  case 'u':
  case 'x':
  case 'X':
   return 0;
  default:
   return -1;
  }
 case 131:
 case 132:
  if (*VAR_0 == '-') {
   VAR_0++;
  }
  if (*VAR_0 == '.') {
   VAR_0++;
  }
  while (FUNC_1 ((ut8)*VAR_0)) {
   VAR_0++;
  }
  if (*VAR_0 == '.') {
   VAR_0++;
  }
  while (FUNC_1 ((ut8)*VAR_0)) {
   VAR_0++;
  }

  switch (*VAR_0++) {
  case 'e':
  case 'E':
  case 'f':
  case 'F':
  case 'g':
  case 'G':
   return 0;

  default:
   return -1;
  }
 case 128:
  if (*VAR_0 == '-') {
   VAR_0++;
  }
  while (FUNC_1 ((ut8)*VAR_0)) {
   VAR_0++;
  }
  if (*VAR_0 == '.') {
   VAR_0++;
   while (FUNC_1 ((ut8)*VAR_0)) {
    VAR_0++;
   }
  }

  if (*VAR_0++ == 's') {
   return 0;
  }
  return -1;
 default:

  FUNC_0 ();
 }

 return -1;
}
