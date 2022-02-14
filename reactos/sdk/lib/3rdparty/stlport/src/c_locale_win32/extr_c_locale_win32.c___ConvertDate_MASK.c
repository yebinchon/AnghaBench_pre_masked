
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
    if (VAR_4 && (VAR_4 == VAR_5)) break;
    switch (*VAR_3) {
    case 'd':
    {
      if (*(VAR_3 + 1) == 'd') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (*(VAR_3 + 2) == 'd') {
          if (*(VAR_3 + 3) == 'd') {
            if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'A'; }
            VAR_2 += 2;
            VAR_3 += 3;
          }
          else {
            if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'a'; }
            VAR_2 += 2;
            VAR_3 += 2;
          }
        }
        else {
          if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'd'; }
          VAR_2 += 2;
          VAR_3++;
        }
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'd'; }
        VAR_2 += 3;
      }
    }
    break;
    case 'M':
    {
      if (*(VAR_3 + 1) == 'M') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (*(VAR_3 + 2) == 'M') {
          if (*(VAR_3 + 3) == 'M') {
            if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'B'; }
            VAR_2 += 2;
            VAR_3 += 3;
          }
          else {
            if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'b'; }
            VAR_2 += 2;
            VAR_3 += 2;
          }
        }
        else {
          if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'm'; }
          VAR_2 += 2;
          VAR_3++;
        }
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'm'; }
        VAR_2 += 3;
      }
    }
    break;
    case 'y':
    {
      if (*(VAR_3 + 1) == 'y') {
        if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (*(VAR_3 + 2) == 'y' && *(VAR_3 + 3) == 'y') {
          if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'Y'; }
          VAR_2 += 2;
          VAR_3 += 3;
        }
        else {
          if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = 'y'; }
          VAR_2 += 2;
          VAR_3++;
        }
      }
      else {
        if (VAR_4 && (VAR_4 + 3 > VAR_5)) {
          *VAR_4 = 0;
          return ++VAR_2;
        }
        if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '#'; *(VAR_4++) = 'y'; }
        VAR_2 += 3;
      }
    }
    break;
    case '%':
    {
      if (VAR_4 && (VAR_4 + 2 > VAR_5)) {
        *VAR_4 = 0;
        return ++VAR_2;
      }
      if (VAR_4) { *(VAR_4++) = '%'; *(VAR_4++) = '%'; }
      VAR_2 += 2;
    }
    break;
    case '\'':
    {
      ++VAR_3;
      while (*VAR_3 != '\'' && *VAR_3 != 0 && (VAR_4 == ((void*)0) || VAR_4 != VAR_5)) {
        if (VAR_4) { *VAR_4++ = *VAR_3; }
        ++VAR_3;
        VAR_2 += 1;
      }
    }
    break;
    default:
    {
      if (VAR_4) { *(VAR_4++) = *VAR_3; }
      VAR_2 += 1;
    }
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
