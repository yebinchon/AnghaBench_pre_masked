
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WaitEventIO ;
__attribute__((used)) static const char *
FUNC_0(WaitEventIO VAR_0)
{
 const char *VAR_1 = "unknown wait event";

 switch (VAR_0)
 {
  case 195:
   VAR_1 = "BufFileRead";
   break;
  case 194:
   VAR_1 = "BufFileWrite";
   break;
  case 193:
   VAR_1 = "ControlFileRead";
   break;
  case 192:
   VAR_1 = "ControlFileSync";
   break;
  case 191:
   VAR_1 = "ControlFileSyncUpdate";
   break;
  case 190:
   VAR_1 = "ControlFileWrite";
   break;
  case 189:
   VAR_1 = "ControlFileWriteUpdate";
   break;
  case 188:
   VAR_1 = "CopyFileRead";
   break;
  case 187:
   VAR_1 = "CopyFileWrite";
   break;
  case 186:
   VAR_1 = "DataFileExtend";
   break;
  case 185:
   VAR_1 = "DataFileFlush";
   break;
  case 184:
   VAR_1 = "DataFileImmediateSync";
   break;
  case 183:
   VAR_1 = "DataFilePrefetch";
   break;
  case 182:
   VAR_1 = "DataFileRead";
   break;
  case 181:
   VAR_1 = "DataFileSync";
   break;
  case 180:
   VAR_1 = "DataFileTruncate";
   break;
  case 179:
   VAR_1 = "DataFileWrite";
   break;
  case 178:
   VAR_1 = "DSMFillZeroWrite";
   break;
  case 177:
   VAR_1 = "LockFileAddToDataDirRead";
   break;
  case 176:
   VAR_1 = "LockFileAddToDataDirSync";
   break;
  case 175:
   VAR_1 = "LockFileAddToDataDirWrite";
   break;
  case 174:
   VAR_1 = "LockFileCreateRead";
   break;
  case 173:
   VAR_1 = "LockFileCreateSync";
   break;
  case 172:
   VAR_1 = "LockFileCreateWrite";
   break;
  case 171:
   VAR_1 = "LockFileReCheckDataDirRead";
   break;
  case 170:
   VAR_1 = "LogicalRewriteCheckpointSync";
   break;
  case 169:
   VAR_1 = "LogicalRewriteMappingSync";
   break;
  case 168:
   VAR_1 = "LogicalRewriteMappingWrite";
   break;
  case 167:
   VAR_1 = "LogicalRewriteSync";
   break;
  case 166:
   VAR_1 = "LogicalRewriteTruncate";
   break;
  case 165:
   VAR_1 = "LogicalRewriteWrite";
   break;
  case 164:
   VAR_1 = "RelationMapRead";
   break;
  case 163:
   VAR_1 = "RelationMapSync";
   break;
  case 162:
   VAR_1 = "RelationMapWrite";
   break;
  case 161:
   VAR_1 = "ReorderBufferRead";
   break;
  case 160:
   VAR_1 = "ReorderBufferWrite";
   break;
  case 159:
   VAR_1 = "ReorderLogicalMappingRead";
   break;
  case 158:
   VAR_1 = "ReplicationSlotRead";
   break;
  case 157:
   VAR_1 = "ReplicationSlotRestoreSync";
   break;
  case 156:
   VAR_1 = "ReplicationSlotSync";
   break;
  case 155:
   VAR_1 = "ReplicationSlotWrite";
   break;
  case 154:
   VAR_1 = "SLRUFlushSync";
   break;
  case 153:
   VAR_1 = "SLRURead";
   break;
  case 152:
   VAR_1 = "SLRUSync";
   break;
  case 151:
   VAR_1 = "SLRUWrite";
   break;
  case 150:
   VAR_1 = "SnapbuildRead";
   break;
  case 149:
   VAR_1 = "SnapbuildSync";
   break;
  case 148:
   VAR_1 = "SnapbuildWrite";
   break;
  case 147:
   VAR_1 = "TimelineHistoryFileSync";
   break;
  case 146:
   VAR_1 = "TimelineHistoryFileWrite";
   break;
  case 145:
   VAR_1 = "TimelineHistoryRead";
   break;
  case 144:
   VAR_1 = "TimelineHistorySync";
   break;
  case 143:
   VAR_1 = "TimelineHistoryWrite";
   break;
  case 142:
   VAR_1 = "TwophaseFileRead";
   break;
  case 141:
   VAR_1 = "TwophaseFileSync";
   break;
  case 140:
   VAR_1 = "TwophaseFileWrite";
   break;
  case 139:
   VAR_1 = "WALSenderTimelineHistoryRead";
   break;
  case 138:
   VAR_1 = "WALBootstrapSync";
   break;
  case 137:
   VAR_1 = "WALBootstrapWrite";
   break;
  case 136:
   VAR_1 = "WALCopyRead";
   break;
  case 135:
   VAR_1 = "WALCopySync";
   break;
  case 134:
   VAR_1 = "WALCopyWrite";
   break;
  case 133:
   VAR_1 = "WALInitSync";
   break;
  case 132:
   VAR_1 = "WALInitWrite";
   break;
  case 131:
   VAR_1 = "WALRead";
   break;
  case 130:
   VAR_1 = "WALSync";
   break;
  case 129:
   VAR_1 = "WALSyncMethodAssign";
   break;
  case 128:
   VAR_1 = "WALWrite";
   break;


 }

 return VAR_1;
}
