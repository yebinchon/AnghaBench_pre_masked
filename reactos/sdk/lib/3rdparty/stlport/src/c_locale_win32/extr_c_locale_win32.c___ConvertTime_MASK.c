
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, char *VAR_1, int VAR_2) {
  const char *VAR_3;
  char *VAR_4, *VAR_5;
  VAR_3 = VAR_0;
  VAR_4 = VAR_1;
  VAR_5 = VAR_4 + VAR_2;
  VAR_2 = 0;
  while (*VAR_3) {
    switch(*VAR_3) {
    case 'h':
      if (*(VAR_3 + 1) == 'h') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'I'; }
        VAR_2 += 2;
        ++VAR_3;
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'I'; }
        VAR_2 += 3;
      }
      break;
    case 'H':
      if (*(VAR_3 + 1) == 'H') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'H'; }
        VAR_2 += 2;
        ++VAR_3;
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'H'; }
        VAR_2 += 3;
      }
      break;
    case 'm':
      if (*(VAR_3 + 1) == 'm') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'M'; }
        VAR_2 += 2;
        VAR_3++;
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'M'; }
        VAR_2 += 3;
      }
      break;
    case 's':
      if (*(VAR_3 + 1) == 's') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'S'; }
        VAR_2 += 2;
        ++VAR_3;
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'S'; }
        VAR_2 += 3;
      }
      break;
    case 't':
      if (*(VAR_3 + 1) == 't')
        ++VAR_3;
      if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
        *VAR_4 = 0;
        return ++VAR_2;
      }
      if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'p'; }
      VAR_2 += 2;
      break;
    case '%':
      if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
        *VAR_4 = 0;
        return ++VAR_2;
      }
      if (VAR_4) { *(VAR_4++)='%'; *(VAR_4++)='%'; }
      VAR_2 += 2;
      break;
    case '\'':
      ++VAR_3;
      while (*VAR_3 != '\'' && *VAR_3 != 0 && (!VAR_4 || (VAR_4 != VAR_5))) {
        if (VAR_4) *VAR_4++ = *VAR_3;
        ++VAR_3;
        VAR_2 += 1;
      }
      break;
    default:
      if (VAR_4) { *(VAR_4++) = *VAR_3; }
      VAR_2 += 1;
      break;
    }
    if (*VAR_3 == 0) break;
    ++VAR_3;
  }

  if (!VAR_4 || VAR_4 != VAR_5) {
    if (VAR_4) *VAR_4 = 0;
    VAR_2 += 1;
  }
  else {

    *(--VAR_4) = 0;
  }

  return VAR_2;
}
