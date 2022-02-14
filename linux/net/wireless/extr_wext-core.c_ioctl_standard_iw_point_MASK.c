
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct iw_ioctl_description {int max_tokens; int token_size; int min_tokens; int flags; } ;
struct iw_encode_ext {scalar_t__ key_len; } ;
typedef int (* iw_handler ) (struct net_device*,struct iw_request_info*,union iwreq_data*,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;


 unsigned int VAR_10 ;


 int FUNC_2 (char*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (struct net_device*,unsigned int,union iwreq_data*,char*) ;

__attribute__((used)) static int FUNC_7(struct iw_point *VAR_11, unsigned int VAR_12,
       const struct iw_ioctl_description *VAR_13,
       iw_handler VAR_14, struct net_device *VAR_15,
       struct iw_request_info *VAR_16)
{
 int VAR_17, VAR_18, VAR_19 = 0, VAR_20 = 0;
 char *VAR_21;




 VAR_18 = VAR_13->max_tokens * VAR_13->token_size;


 switch (VAR_12) {
 case 129:
 case 131:
 case 128:
 case 130:
  if (VAR_11->length == VAR_13->max_tokens + 1)
   VAR_20 = 1;
  else if (FUNC_1(VAR_12) && (VAR_11->length != 0)) {
   char VAR_22[VAR_9 + 1];
   unsigned int VAR_23;
   VAR_23 = VAR_11->length * VAR_13->token_size;

   if (VAR_23 > VAR_9)
    return -VAR_1;

   VAR_17 = FUNC_2(VAR_22, VAR_11->pointer, VAR_23);
   if (VAR_17)
    return -VAR_1;

   if (VAR_22[VAR_11->length - 1] == '\0')
    VAR_20 = 1;
  }
  break;
 default:
  break;
 }

 VAR_11->length -= VAR_20;


 if (FUNC_1(VAR_12)) {

  if (!VAR_11->pointer && VAR_11->length != 0)
   return -VAR_1;

  if (VAR_11->length > VAR_13->max_tokens)
   return -VAR_0;
  if (VAR_11->length < VAR_13->min_tokens)
   return -VAR_2;
 } else {

  if (!VAR_11->pointer)
   return -VAR_1;

  VAR_19 = VAR_11->length;







  if ((VAR_13->flags & VAR_7) &&
      (VAR_19 > VAR_13->max_tokens)) {




   VAR_18 = VAR_19 * VAR_13->token_size;






  }
 }


 VAR_21 = FUNC_5(VAR_18, VAR_5);
 if (!VAR_21)
  return -VAR_4;


 if (FUNC_1(VAR_12) && (VAR_11->length != 0)) {
  if (FUNC_2(VAR_21, VAR_11->pointer,
       VAR_11->length *
       VAR_13->token_size)) {
   VAR_17 = -VAR_1;
   goto out;
  }

  if (VAR_12 == VAR_10) {
   struct iw_encode_ext *VAR_24 = (void *) VAR_21;

   if (VAR_11->length < sizeof(*VAR_24) + VAR_24->key_len) {
    VAR_17 = -VAR_1;
    goto out;
   }
  }
 }

 if (FUNC_0(VAR_12) && !(VAR_13->flags & VAR_7)) {
  VAR_11->length = VAR_13->max_tokens;
 }

 VAR_17 = VAR_14(VAR_15, VAR_16, (union iwreq_data *) VAR_11, VAR_21);

 VAR_11->length += VAR_20;


 if (!VAR_17 && FUNC_0(VAR_12)) {

  if (VAR_19 < VAR_11->length) {
   VAR_17 = -VAR_0;
   goto out;
  }

  if (FUNC_3(VAR_11->pointer, VAR_21,
     VAR_11->length *
     VAR_13->token_size)) {
   VAR_17 = -VAR_1;
   goto out;
  }
 }


 if ((VAR_13->flags & VAR_6) &&
     ((VAR_17 == 0) || (VAR_17 == -VAR_3))) {
  union iwreq_data *VAR_25 = (union iwreq_data *) VAR_11;

  if (VAR_13->flags & VAR_8)



   FUNC_6(VAR_15, VAR_12, VAR_25, ((void*)0));
  else
   FUNC_6(VAR_15, VAR_12, VAR_25, VAR_21);
 }

out:
 FUNC_4(VAR_21);
 return VAR_17;
}
