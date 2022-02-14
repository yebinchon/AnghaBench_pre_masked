
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* quote; char* escape; char* raw_buf; int raw_buf_index; int raw_buf_len; scalar_t__ eol_type; int file_encoding; scalar_t__ encoding_embeds_ascii; scalar_t__ csv_mode; int line_buf; int cur_lineno; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static bool
FUNC_10(CopyState VAR_8)
{
 char *VAR_9;
 int VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 bool VAR_14 = 0;
 char VAR_15[2];


 bool VAR_16 = 1;
 bool VAR_17 = 0,
    VAR_18 = 0;
 char VAR_19 = '\0';
 char VAR_20 = '\0';

 if (VAR_8->csv_mode)
 {
  VAR_19 = VAR_8->quote[0];
  VAR_20 = VAR_8->escape[0];

  if (VAR_19 == VAR_20)
   VAR_20 = '\0';
 }

 VAR_15[1] = '\0';
 VAR_9 = VAR_8->raw_buf;
 VAR_10 = VAR_8->raw_buf_index;
 VAR_11 = VAR_8->raw_buf_len;

 for (;;)
 {
  int VAR_21;
  char VAR_22;
  if (VAR_10 >= VAR_11 || VAR_12)
  {
   VAR_7;





   if (!FUNC_0(VAR_8))
    VAR_13 = 1;
   VAR_10 = 0;
   VAR_11 = VAR_8->raw_buf_len;





   if (VAR_11 <= 0)
   {
    VAR_14 = 1;
    break;
   }
   VAR_12 = 0;
  }


  VAR_21 = VAR_10;
  VAR_22 = VAR_9[VAR_10++];

  if (VAR_8->csv_mode)
  {
   if (VAR_22 == '\\' || VAR_22 == '\r')
   {
    FUNC_2(0);
   }
   if (VAR_17 && VAR_22 == VAR_20)
    VAR_18 = !VAR_18;
   if (VAR_22 == VAR_19 && !VAR_18)
    VAR_17 = !VAR_17;
   if (VAR_22 != VAR_20)
    VAR_18 = 0;







   if (VAR_17 && VAR_22 == (VAR_8->eol_type == VAR_2 ? '\n' : '\r'))
    VAR_8->cur_lineno++;
  }


  if (VAR_22 == '\r' && (!VAR_8->csv_mode || !VAR_17))
  {

   if (VAR_8->eol_type == VAR_3 ||
    VAR_8->eol_type == VAR_1)
   {






    FUNC_2(0);


    VAR_22 = VAR_9[VAR_10];

    if (VAR_22 == '\n')
    {
     VAR_10++;
     VAR_8->eol_type = VAR_1;
    }
    else
    {

     if (VAR_8->eol_type == VAR_1)
      FUNC_5(VAR_5,
        (FUNC_6(VAR_4),
         !VAR_8->csv_mode ?
         FUNC_8("literal carriage return found in data") :
         FUNC_8("unquoted carriage return found in data"),
         !VAR_8->csv_mode ?
         FUNC_7("Use \"\\r\" to represent carriage return.") :
         FUNC_7("Use quoted CSV field to represent carriage return.")));





     VAR_8->eol_type = VAR_0;
    }
   }
   else if (VAR_8->eol_type == VAR_2)
    FUNC_5(VAR_5,
      (FUNC_6(VAR_4),
       !VAR_8->csv_mode ?
       FUNC_8("literal carriage return found in data") :
       FUNC_8("unquoted carriage return found in data"),
       !VAR_8->csv_mode ?
       FUNC_7("Use \"\\r\" to represent carriage return.") :
       FUNC_7("Use quoted CSV field to represent carriage return.")));

   break;
  }


  if (VAR_22 == '\n' && (!VAR_8->csv_mode || !VAR_17))
  {
   if (VAR_8->eol_type == VAR_0 || VAR_8->eol_type == VAR_1)
    FUNC_5(VAR_5,
      (FUNC_6(VAR_4),
       !VAR_8->csv_mode ?
       FUNC_8("literal newline found in data") :
       FUNC_8("unquoted newline found in data"),
       !VAR_8->csv_mode ?
       FUNC_7("Use \"\\n\" to represent newline.") :
       FUNC_7("Use quoted CSV field to represent newline.")));
   VAR_8->eol_type = VAR_2;

   break;
  }





  if (VAR_22 == '\\' && (!VAR_8->csv_mode || VAR_16))
  {
   char VAR_23;

   FUNC_2(0);
   FUNC_1(0);







   VAR_23 = VAR_9[VAR_10];

   if (VAR_23 == '.')
   {
    VAR_10++;






    if (VAR_8->eol_type == VAR_1)
    {

     FUNC_2(0);

     VAR_23 = VAR_9[VAR_10++];

     if (VAR_23 == '\n')
     {
      if (!VAR_8->csv_mode)
       FUNC_5(VAR_5,
         (FUNC_6(VAR_4),
          FUNC_8("end-of-copy marker does not match previous newline style")));
      else
       VAR_6;
     }
     else if (VAR_23 != '\r')
     {
      if (!VAR_8->csv_mode)
       FUNC_5(VAR_5,
         (FUNC_6(VAR_4),
          FUNC_8("end-of-copy marker corrupt")));
      else
       VAR_6;
     }
    }


    FUNC_2(0);

    VAR_23 = VAR_9[VAR_10++];

    if (VAR_23 != '\r' && VAR_23 != '\n')
    {
     if (!VAR_8->csv_mode)
      FUNC_5(VAR_5,
        (FUNC_6(VAR_4),
         FUNC_8("end-of-copy marker corrupt")));
     else
      VAR_6;
    }

    if ((VAR_8->eol_type == VAR_2 && VAR_23 != '\n') ||
     (VAR_8->eol_type == VAR_1 && VAR_23 != '\n') ||
     (VAR_8->eol_type == VAR_0 && VAR_23 != '\r'))
    {
     FUNC_5(VAR_5,
       (FUNC_6(VAR_4),
        FUNC_8("end-of-copy marker does not match previous newline style")));
    }





    if (VAR_21 > VAR_8->raw_buf_index)
     FUNC_4(&VAR_8->line_buf,
             VAR_8->raw_buf + VAR_8->raw_buf_index,
             VAR_21 - VAR_8->raw_buf_index);
    VAR_8->raw_buf_index = VAR_10;
    VAR_14 = 1;
    break;
   }
   else if (!VAR_8->csv_mode)
    VAR_10++;
  }







not_end_of_copy:
  if (VAR_8->encoding_embeds_ascii && FUNC_3(VAR_22))
  {
   int VAR_24;






   VAR_15[0] = VAR_22;
   VAR_24 = FUNC_9(VAR_8->file_encoding, VAR_15);

   FUNC_2(VAR_24 - 1);
   FUNC_1(VAR_24 - 1);
   VAR_10 += VAR_24 - 1;
  }
  VAR_16 = 0;
 }




 VAR_7;

 return VAR_14;
}
