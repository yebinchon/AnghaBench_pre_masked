
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tomoyo_request_info {struct tomoyo_execve* ee; struct tomoyo_obj_info* obj; } ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_obj_info {int validate_done; struct tomoyo_mini_stat* stat; int * stat_valid; struct tomoyo_path_info* symlink_target; } ;
struct tomoyo_number_union {unsigned long* values; scalar_t__ group; } ;
struct tomoyo_name_union {int dummy; } ;
struct tomoyo_mini_stat {unsigned long ino; unsigned long mode; int rdev; int dev; int gid; int uid; } ;
struct tomoyo_execve {struct linux_binprm* bprm; } ;
struct tomoyo_envp {int dummy; } ;
struct tomoyo_condition_element {int equals; int left; int right; } ;
struct tomoyo_condition {int condc; int argc; int envc; int numbers_count; int names_count; } ;
struct tomoyo_argv {int dummy; } ;
struct linux_binprm {unsigned long argc; unsigned long envc; struct file* file; } ;
struct file {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;

 int VAR_15 ;






 int VAR_16 ;







 int VAR_17 ;






 int VAR_18 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 unsigned long FUNC_10 (int *,int ) ;
 unsigned long FUNC_11 (int *,int ) ;
 int VAR_19 ;
 int FUNC_12 (struct tomoyo_path_info*,struct tomoyo_name_union const*) ;
 int FUNC_13 (struct tomoyo_obj_info*) ;
 int const FUNC_14 (unsigned long,unsigned long,scalar_t__) ;
 int FUNC_15 (struct tomoyo_execve*,int,struct tomoyo_argv const*,int,struct tomoyo_envp const*) ;
 int FUNC_16 (struct file*,struct tomoyo_name_union const*,int const) ;
 unsigned long FUNC_17 () ;
 unsigned long FUNC_18 () ;

bool FUNC_19(struct tomoyo_request_info *VAR_20,
        const struct tomoyo_condition *VAR_21)
{
 u32 VAR_22;
 unsigned long VAR_23[2] = { 0, 0 };
 unsigned long VAR_24[2] = { 0, 0 };
 const struct tomoyo_condition_element *VAR_25;
 const struct tomoyo_number_union *VAR_26;
 const struct tomoyo_name_union *VAR_27;
 const struct tomoyo_argv *VAR_28;
 const struct tomoyo_envp *VAR_29;
 struct tomoyo_obj_info *VAR_30;
 u16 VAR_31;
 u16 VAR_32;
 u16 VAR_33;
 struct linux_binprm *VAR_34 = ((void*)0);

 if (!VAR_21)
  return 1;
 VAR_31 = VAR_21->condc;
 VAR_32 = VAR_21->argc;
 VAR_33 = VAR_21->envc;
 VAR_30 = VAR_20->obj;
 if (VAR_20->ee)
  VAR_34 = VAR_20->ee->bprm;
 if (!VAR_34 && (VAR_32 || VAR_33))
  return 0;
 VAR_25 = (struct tomoyo_condition_element *) (VAR_21 + 1);
 VAR_26 = (const struct tomoyo_number_union *) (VAR_25 + VAR_31);
 VAR_27 = (const struct tomoyo_name_union *)
  (VAR_26 + VAR_21->numbers_count);
 VAR_28 = (const struct tomoyo_argv *) (VAR_27 + VAR_21->names_count);
 VAR_29 = (const struct tomoyo_envp *) (VAR_28 + VAR_32);
 for (VAR_22 = 0; VAR_22 < VAR_31; VAR_22++) {
  const bool VAR_35 = VAR_25->equals;
  const u8 VAR_36 = VAR_25->left;
  const u8 VAR_37 = VAR_25->right;
  bool VAR_38[2] = { 0, 0 };
  u8 VAR_39;

  VAR_25++;

  if (VAR_36 == VAR_12 || VAR_36 == VAR_13)
   continue;

  if (VAR_37 == VAR_14) {
   const struct tomoyo_name_union *VAR_40 = VAR_27++;
   struct tomoyo_path_info *VAR_41;
   struct tomoyo_execve *VAR_42;
   struct file *VAR_43;

   switch (VAR_36) {
   case 145:
    VAR_41 = VAR_30 ? VAR_30->symlink_target : ((void*)0);
    if (!VAR_41 ||
        !(FUNC_12(VAR_41, VAR_40)
        == VAR_35))
     goto out;
    break;
   case 185:
    VAR_42 = VAR_20->ee;
    VAR_43 = VAR_42 ? VAR_42->bprm->file : ((void*)0);
    if (!FUNC_16(VAR_43, VAR_40,
              VAR_35))
     goto out;
    break;
   }
   continue;
  }

  for (VAR_39 = 0; VAR_39 < 2; VAR_39++) {
   const u8 VAR_44 = VAR_39 ? VAR_37 : VAR_36;
   unsigned long VAR_45 = 0;

   switch (VAR_44) {
   case 135:
    VAR_45 = FUNC_11(&VAR_19, FUNC_9());
    break;
   case 143:
    VAR_45 = FUNC_11(&VAR_19, FUNC_3());
    break;
   case 136:
    VAR_45 = FUNC_11(&VAR_19, FUNC_8());
    break;
   case 141:
    VAR_45 = FUNC_11(&VAR_19, FUNC_5());
    break;
   case 140:
    VAR_45 = FUNC_10(&VAR_19, FUNC_6());
    break;
   case 144:
    VAR_45 = FUNC_10(&VAR_19, FUNC_2());
    break;
   case 137:
    VAR_45 = FUNC_10(&VAR_19, FUNC_7());
    break;
   case 142:
    VAR_45 = FUNC_10(&VAR_19, FUNC_4());
    break;
   case 139:
    VAR_45 = FUNC_17();
    break;
   case 138:
    VAR_45 = FUNC_18();
    break;
   case 129:
    VAR_45 = VAR_8;
    break;
   case 128:
    VAR_45 = VAR_5;
    break;
   case 130:
    VAR_45 = VAR_7;
    break;
   case 134:
    VAR_45 = VAR_1;
    break;
   case 132:
    VAR_45 = VAR_3;
    break;
   case 133:
    VAR_45 = VAR_2;
    break;
   case 131:
    VAR_45 = VAR_4;
    break;
   case 174:
    VAR_45 = VAR_10;
    break;
   case 175:
    VAR_45 = VAR_9;
    break;
   case 173:
    VAR_45 = VAR_11;
    break;
   case 177:
    VAR_45 = 0400;
    break;
   case 176:
    VAR_45 = 0200;
    break;
   case 178:
    VAR_45 = 0100;
    break;
   case 183:
    VAR_45 = 0040;
    break;
   case 182:
    VAR_45 = 0020;
    break;
   case 184:
    VAR_45 = 0010;
    break;
   case 180:
    VAR_45 = 0004;
    break;
   case 179:
    VAR_45 = 0002;
    break;
   case 181:
    VAR_45 = 0001;
    break;
   case 187:
    if (!VAR_34)
     goto out;
    VAR_45 = VAR_34->argc;
    break;
   case 186:
    if (!VAR_34)
     goto out;
    VAR_45 = VAR_34->envc;
    break;
   case 172:

    break;
   default:
    if (!VAR_30)
     goto out;
    if (!VAR_30->validate_done) {
     FUNC_13(VAR_30);
     VAR_30->validate_done = 1;
    }
    {
     u8 VAR_46;
     struct tomoyo_mini_stat *VAR_47;

     switch (VAR_44) {
     case 159:
     case 169:
     case 168:
     case 167:
     case 166:
     case 160:
     case 171:
     case 170:
     case 161:
      VAR_46 = VAR_15;
      break;
     case 146:
     case 156:
     case 155:
     case 154:
     case 153:
     case 147:
     case 158:
     case 157:
     case 148:
      VAR_46 = VAR_17;
      break;
     case 162:
     case 165:
     case 164:
     case 163:
      VAR_46 =
       VAR_16;
      break;
     case 149:
     case 152:
     case 151:
     case 150:
      VAR_46 =
       VAR_18;
      break;
     default:
      goto out;
     }
     if (!VAR_30->stat_valid[VAR_46])
      goto out;
     VAR_47 = &VAR_30->stat[VAR_46];
     switch (VAR_44) {
     case 159:
     case 146:
     case 162:
     case 149:
      VAR_45 = FUNC_11(&VAR_19, VAR_47->uid);
      break;
     case 169:
     case 156:
     case 165:
     case 152:
      VAR_45 = FUNC_10(&VAR_19, VAR_47->gid);
      break;
     case 168:
     case 155:
     case 164:
     case 151:
      VAR_45 = VAR_47->ino;
      break;
     case 167:
     case 154:
      VAR_45 = FUNC_0(VAR_47->dev);
      break;
     case 166:
     case 153:
      VAR_45 = FUNC_1(VAR_47->dev);
      break;
     case 160:
     case 147:
      VAR_45 = VAR_47->mode & VAR_6;
      break;
     case 171:
     case 158:
      VAR_45 = FUNC_0(VAR_47->rdev);
      break;
     case 170:
     case 157:
      VAR_45 = FUNC_1(VAR_47->rdev);
      break;
     case 161:
     case 148:
     case 163:
     case 150:
      VAR_45 = VAR_47->mode & VAR_0;
      break;
     }
    }
    break;
   }
   VAR_24[VAR_39] = VAR_45;
   VAR_23[VAR_39] = VAR_45;
   switch (VAR_44) {
   case 174:
   case 175:
   case 173:
   case 177:
   case 176:
   case 178:
   case 183:
   case 182:
   case 184:
   case 180:
   case 179:
   case 181:
    VAR_38[VAR_39] = 1;
   }
  }
  if (VAR_36 == 172) {

   const struct tomoyo_number_union *VAR_48 = VAR_26++;

   VAR_23[0] = VAR_48->values[0];
   VAR_24[0] = VAR_48->values[1];
  }
  if (VAR_37 == 172) {

   const struct tomoyo_number_union *VAR_49 = VAR_26++;

   if (VAR_49->group) {
    if (FUNC_14(VAR_23[0],
        VAR_24[0],
        VAR_49->group)
        == VAR_35)
     continue;
   } else {
    if ((VAR_23[0] <= VAR_49->values[1] &&
         VAR_24[0] >= VAR_49->values[0]) == VAR_35)
     continue;
   }
   goto out;
  }




  if (VAR_38[0] && VAR_38[1]) {
   goto out;
  } else if (VAR_38[0]) {
   switch (VAR_37) {
   case 161:
   case 163:
   case 148:
   case 150:
    if (!(VAR_24[0] & VAR_24[1]) == !VAR_35)
     continue;
   }
   goto out;
  } else if (VAR_38[1]) {
   switch (VAR_36) {
   case 161:
   case 163:
   case 148:
   case 150:
    if (!(VAR_24[0] & VAR_24[1]) == !VAR_35)
     continue;
   }
   goto out;
  }

  if ((VAR_23[0] <= VAR_24[1] && VAR_24[0] >= VAR_23[1]) == VAR_35)
   continue;
out:
  return 0;
 }

 if (VAR_20->ee && (VAR_32 || VAR_33))
  return FUNC_15(VAR_20->ee, VAR_32, VAR_28, VAR_33, VAR_29);
 return 1;
}
