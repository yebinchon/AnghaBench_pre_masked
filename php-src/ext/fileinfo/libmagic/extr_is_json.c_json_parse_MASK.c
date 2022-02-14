
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char const**,unsigned char const*,size_t*,size_t) ;
 int FUNC_2 (unsigned char const**,unsigned char const*,char*,int) ;
 int FUNC_3 (unsigned char const**,unsigned char const*) ;
 int FUNC_4 (unsigned char const**,unsigned char const*,size_t*,size_t) ;
 int FUNC_5 (unsigned char const**,unsigned char const*) ;
 unsigned char* FUNC_6 (unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_7(const unsigned char **VAR_6, const unsigned char *VAR_7,
    size_t *VAR_8, size_t VAR_9)
{
 const unsigned char *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_10 = FUNC_6(*VAR_6, VAR_7);
 if (VAR_10 == VAR_7)
  goto out;


 if (VAR_9 > 20)
  return 0;






 FUNC_0("Parse general: ", VAR_10, *VAR_6);
 switch (*VAR_10++) {
 case '"':
  VAR_11 = FUNC_5(&VAR_10, VAR_7);
  VAR_12 = VAR_5;
  break;
 case '[':
  VAR_11 = FUNC_1(&VAR_10, VAR_7, VAR_8, VAR_9 + 1);
  VAR_12 = VAR_0;
  break;
 case '{':
  VAR_11 = FUNC_4(&VAR_10, VAR_7, VAR_8, VAR_9 + 1);
  VAR_12 = VAR_4;
  break;
 case 't':
  VAR_11 = FUNC_2(&VAR_10, VAR_7, "true", sizeof("true"));
  VAR_12 = VAR_2;
  break;
 case 'f':
  VAR_11 = FUNC_2(&VAR_10, VAR_7, "false", sizeof("false"));
  VAR_12 = VAR_2;
  break;
 case 'n':
  VAR_11 = FUNC_2(&VAR_10, VAR_7, "null", sizeof("null"));
  VAR_12 = VAR_2;
  break;
 default:
  --VAR_10;
  VAR_11 = FUNC_3(&VAR_10, VAR_7);
  VAR_12 = VAR_3;
  break;
 }
 if (VAR_11)
  VAR_8[VAR_12]++;
 VAR_10 = FUNC_6(VAR_10, VAR_7);
out:
 *VAR_6 = VAR_10;
 FUNC_0("End general: ", VAR_10, *VAR_6);
 if (VAR_9 == 0)
  return VAR_11 && (VAR_8[VAR_1] || VAR_8[VAR_4]);
 return VAR_11;
}
