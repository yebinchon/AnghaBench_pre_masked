
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_entity_addr {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_entity_addr*,int) ;
 int FUNC_1 (char const*,int,struct ceph_entity_addr*,char,char const**) ;
 int FUNC_2 (struct ceph_entity_addr*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char const*) ;

int FUNC_5(const char *VAR_3, const char *VAR_4,
     struct ceph_entity_addr *VAR_5,
     int VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9 = -VAR_2;
 const char *VAR_10 = VAR_3;

 FUNC_3("parse_ips on '%.*s'\n", (int)(VAR_4-VAR_3), VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  const char *VAR_11;
  int VAR_12;
  char VAR_13 = ',';

  if (*VAR_10 == '[') {
   VAR_13 = ']';
   VAR_10++;
  }

  VAR_9 = FUNC_1(VAR_10, VAR_4 - VAR_10, &VAR_5[VAR_8], VAR_13, &VAR_11);
  if (VAR_9)
   goto bad;
  VAR_9 = -VAR_2;

  VAR_10 = VAR_11;

  if (VAR_13 == ']') {
   if (*VAR_10 != ']') {
    FUNC_3("missing matching ']'\n");
    goto bad;
   }
   VAR_10++;
  }


  if (VAR_10 < VAR_4 && *VAR_10 == ':') {
   VAR_12 = 0;
   VAR_10++;
   while (VAR_10 < VAR_4 && *VAR_10 >= '0' && *VAR_10 <= '9') {
    VAR_12 = (VAR_12 * 10) + (*VAR_10 - '0');
    VAR_10++;
   }
   if (VAR_12 == 0)
    VAR_12 = VAR_1;
   else if (VAR_12 > 65535)
    goto bad;
  } else {
   VAR_12 = VAR_1;
  }

  FUNC_0(&VAR_5[VAR_8], VAR_12);
  VAR_5[VAR_8].type = VAR_0;

  FUNC_3("parse_ips got %s\n", FUNC_2(&VAR_5[VAR_8]));

  if (VAR_10 == VAR_4)
   break;
  if (*VAR_10 != ',')
   goto bad;
  VAR_10++;
 }

 if (VAR_10 != VAR_4)
  goto bad;

 if (VAR_7)
  *VAR_7 = VAR_8 + 1;
 return 0;

bad:
 FUNC_4("parse_ips bad ip '%.*s'\n", (int)(VAR_4 - VAR_3), VAR_3);
 return VAR_9;
}
