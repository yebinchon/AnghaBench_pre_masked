
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port; int query; int path; int host; } ;
typedef TYPE_1__ coap_uri_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,size_t,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 unsigned char FUNC_3 (unsigned char) ;

int FUNC_4(unsigned char *VAR_2, size_t VAR_3, coap_uri_t *VAR_4) {
  unsigned char *VAR_5, *VAR_6;
  int VAR_7 = 0, VAR_8 = 0;

  if (!VAR_2 || !VAR_4)
    return -1;

  FUNC_2(VAR_4, 0, sizeof(coap_uri_t));
  VAR_4->port = VAR_0;


  VAR_5 = VAR_2;
  if (*VAR_5 == '/') {
    VAR_6 = VAR_5;
    goto path;
  }

  VAR_6 = (unsigned char *)VAR_1;
  while (VAR_3 && *VAR_6 && FUNC_3(*VAR_5) == *VAR_6) {
    ++VAR_5; ++VAR_6; --VAR_3;
  }



  if (*VAR_6) {
    VAR_8 = -1;
    goto error;
  }


  if (VAR_3 && (VAR_7 = FUNC_3(*VAR_5) == 's')) {
    ++VAR_5; --VAR_3;
  }

  VAR_6 = (unsigned char *)"://";
  while (VAR_3 && *VAR_6 && FUNC_3(*VAR_5) == *VAR_6) {
    ++VAR_5; ++VAR_6; --VAR_3;
  }

  if (*VAR_6) {
    VAR_8 = -2;
    goto error;
  }


  VAR_6 = VAR_5;
  if (VAR_3 && *VAR_5 == '[') {
    ++VAR_5;

    while (VAR_3 && *VAR_6 != ']') {
      ++VAR_6; --VAR_3;
    }

    if (!VAR_3 || *VAR_6 != ']' || VAR_5 == VAR_6) {
      VAR_8 = -3;
      goto error;
    }

    FUNC_0(&VAR_4->host, VAR_6 - VAR_5, VAR_5);
    ++VAR_6; --VAR_3;
  } else {
    while (VAR_3 && *VAR_6 != ':' && *VAR_6 != '/' && *VAR_6 != '?') {
      *VAR_6 = FUNC_3(*VAR_6);
      ++VAR_6;
      --VAR_3;
    }

    if (VAR_5 == VAR_6) {
      VAR_8 = -3;
      goto error;
    }

    FUNC_0(&VAR_4->host, VAR_6 - VAR_5, VAR_5);
  }


  if (VAR_3 && *VAR_6 == ':') {
    VAR_5 = ++VAR_6;
    --VAR_3;

    while (VAR_3 && FUNC_1(*VAR_6)) {
      ++VAR_6;
      --VAR_3;
    }

    if (VAR_5 < VAR_6) {
      int VAR_9 = 0;

      while (VAR_5 < VAR_6)
      VAR_9 = VAR_9 * 10 + (*VAR_5++ - '0');

      VAR_4->port = VAR_9;
    }
  }

 path:

  if (!VAR_3)
    goto end;

  if (*VAR_6 == '/') {
    VAR_5 = ++VAR_6;
    --VAR_3;

    while (VAR_3 && *VAR_6 != '?') {
      ++VAR_6;
      --VAR_3;
    }

    if (VAR_5 < VAR_6) {
      FUNC_0(&VAR_4->path, VAR_6 - VAR_5, VAR_5);
      VAR_5 = VAR_6;
    }
  }


  if (VAR_3 && *VAR_5 == '?') {
    ++VAR_5;
    --VAR_3;
    FUNC_0(&VAR_4->query, VAR_3, VAR_5);
    VAR_3 = 0;
  }

  end:
  return VAR_3 ? -1 : 0;

  error:
  return VAR_8;
}
