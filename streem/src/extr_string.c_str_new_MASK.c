
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_string {char const* ptr; int len; } ;
typedef int strm_value ;
typedef int strm_string ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 struct strm_string* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct strm_string*,int ) ;

__attribute__((used)) static strm_string
FUNC_6(const char* VAR_5, strm_int VAR_6, int VAR_7)
{
  strm_value VAR_8;
  strm_value VAR_9;
  char* VAR_10;

  if (!VAR_5) goto mkbuf;
  if (VAR_6 < 6) {
    VAR_8 = VAR_2;
    VAR_9 = 0;
    VAR_10 = FUNC_0(VAR_9)+1;
    FUNC_2(VAR_10, VAR_5, VAR_6);
    VAR_10[-1] = VAR_6;
  }
  else if (VAR_6 == 6) {
    VAR_8 = VAR_0;
    VAR_9 = 0;
    VAR_10 = FUNC_0(VAR_9);
    FUNC_2(VAR_10, VAR_5, VAR_6);
  }
  else {
    struct strm_string* VAR_11;

    if (VAR_5 && (VAR_7 || FUNC_4(VAR_5))) {
      VAR_8 = VAR_1;
      VAR_11 = FUNC_1(sizeof(struct strm_string));
      VAR_11->ptr = VAR_5;
    }
    else {
      char *VAR_12;

    mkbuf:
      VAR_8 = VAR_3;
      VAR_11 = FUNC_1(sizeof(struct strm_string)+VAR_6+1);
      VAR_12 = (char*)&VAR_11[1];
      if (VAR_5) {
        FUNC_2(VAR_12, VAR_5, VAR_6);
      }
      else {
        FUNC_3(VAR_12, 0, VAR_6);
      }
      VAR_12[VAR_6] = '\0';
      VAR_11->ptr = VAR_12;
    }
    VAR_11->len = VAR_6;
    VAR_9 = FUNC_5(VAR_11, 0);
  }
  return VAR_8 | (VAR_9 & VAR_4);
}
